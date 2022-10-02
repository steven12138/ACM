#include<bits/stdc++.h>
#define LL long long
#define ULL unsinged long long
#define MAXN 100005
using namespace std;
int t,n;
int a[MAXN];
LL b[MAXN];
LL pre1[MAXN],pre0[MAXN];
LL f1[MAXN],f0[MAXN],f,len1,len0,sum1,len,sum0;
int main(){
 ios::sync_with_stdio(false);
 cin>>t;
 while(t--){
  cin>>n;
  for(int i=1;i<=n;i++)cin>>a[i];
  for(int i=1;i<=n;i++)cin>>b[i];
  len1=len0=0;
  sum1=sum0=0;
  for(int i=1;i<=n;i++){
   if(a[i]){
    f1[++len1]=b[i];
    
   } 
   else {
    f0[++len0]=b[i];
    
   } 
  }
  sort(f1+1,f1+1+len1,greater<LL>());
  sort(f0+1,f0+1+len0,greater<LL>());
  for(int i=1;i<=len0;i++){
   pre0[i]=pre0[i-1]+f0[i];
  }
  for(int i=1;i<=len1;i++){
   pre1[i]=pre1[i-1]+f1[i];
  }
   
  printf("%lld\n",max(sum1,sum0));
 }
 return 0;
}