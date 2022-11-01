#include <iostream>
#include <string>
#include <set>
#include <map>

class student {
    std::string name{};
    int score{};
public:
    student() = default;

    student(const std::string &&id, const std::string &&name, int score)
            : id(id), name(name), score(score) {}

    [[nodiscard]] int getScore() const {
        return score;
    }

    friend std::ostream &operator<<(std::ostream &os, const student &student) {
        os << student.name << " " << student.id << " " << student.score;
        return os;
    }

    friend std::istream &operator>>(std::istream &os, student &student) {
        os >> student.name >> student.id >> student.score;
        return os;
    }

    void setName(const std::string &&nm) {
        student::name = nm;
    }

    void setScore(int i) {
        student::score = i;
    }

    std::string id{};
};

auto main() -> int {
    std::map<std::string, student> ls;
    int n;
    std::cin >> n;
    while (n--) {
        student p;
        std::cin >> p;
        ls[p.id] = p;
    }
    int q;
    std::cin >> q;
    while (q--) {
        int op;
        std::string id;
        std::cin >> op >> id;
        if (op == 1) {
            std::cout << ls[id] << std::endl;
        } else if (op == 2) {
            std::string name;
            std::cin >> name;
            ls[id].setName(std::move(name));
        } else if (op == 3) {
            int score;
            std::cin >> score;
            ls[id].setScore(score);
        }
    }

    return 0;
}