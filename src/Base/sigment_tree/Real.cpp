#include <iostream>
#include <cstdlib>
#define MAXN 100100

using namespace std;

struct node
{
    int l,r;
    long long sum;
    node *ch[2];
    long long lazy;
}pool[3*MAXN],root;

int n,m,cnt;
int a[MAXN];

void build_tree(node *p,int l,int r)
{
    p->l=l;
    p->r=r;
    if(l==r)
    {
        p->sum=a[l];
        return ;
    }
    int mid=(l+r)/2;
    node *lson=&pool[++cnt],*rson=&pool[++cnt];
    build_tree(lson,l,mid);
    build_tree(rson,mid+1,r);
    p->ch[0]=lson;
    p->ch[1]=rson;
    p->sum=p->ch[0]->sum+p->ch[1]->sum;
}

void pushdown(node *p)
{
//	cout<<"pushdown"<<p->l<<" "<<p->r<<"\n";
    //if(p->lazy==0)return ;
    if(p->l==p->r)
    {
        //	cout<<"pushdown||"<<p->l<<" "<<p->r<<"\n";
        p->sum+=p->lazy;
        p->lazy=0;
        return;
    }
    p->sum+=p->lazy*(p->r-p->l+1);
    p->ch[0]->lazy+=p->lazy;
    p->ch[1]->lazy+=p->lazy;
    p->lazy=0;
}

void update(node *p)
{
    //cout<<"update"<<p->l<<" "<<p->r<<"\n";
    if(p->l==p->r)
        return ;
    pushdown(p->ch[0]);
    pushdown(p->ch[1]);
    p->sum=p->ch[0]->sum+p->ch[1]->sum;
}

void change(node *p,int l,int r,int d)
{
    //cout<<p->l<<" "<<p->r<<" "<<l<<" "<<r<<endl;

    pushdown(p);
    if(p->l==l&&p->r==r)
    {
        p->lazy+=d;
        return ;
    }
    if(p->ch[0]->l<=l&&p->ch[0]->r>=r)
    {
        change(p->ch[0],l,r,d);
    }
    else if(p->ch[1]->l<=l&&p->ch[1]->r>=r)
    {
        change(p->ch[1],l,r,d);
    }
    else if(p->ch[0]->r>=l&&p->ch[1]->l<=r)
    {
        change(p->ch[0],l,p->ch[0]->r,d);
        change(p->ch[1],p->ch[1]->l,r,d);
    }
    update(p);
}

long long query(node *p,int l,int r)
{
    pushdown(p);
    if(p->l==l&&p->r==r)
    {
        return p->sum;
    }
    if(p->ch[0]->l<=l&&p->ch[0]->r>=r)
    {
        return query(p->ch[0],l,r);
    }
    else if(p->ch[1]->l<=l&&p->ch[1]->r>=r)
    {
        return query(p->ch[1],l,r);
    }
    else if(p->ch[0]->r>=l&&p->ch[1]->l<=r)
    {
        return query(p->ch[0],l,p->ch[0]->r)+query(p->ch[1],p->ch[1]->l,r);
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build_tree(&root,1,n);
    for(int i=1;i<=m;i++)
    {
        int l,r;
        int op;
        cin>>op>>l>>r;
        if(op==1)
        {
            int d;
            cin>>d;
            change(&root,l,r,d);
        }
        else
        {
            cout<<query(&root,l,r)<<endl;
        }
    }
    return 0;
}