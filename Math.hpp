#include <unordered_map>
namespace ns {

class my_unordered_map : public std::unordered_map<int,int> {
    void hoge() {
        this->emplace(1,10);
    }
};

int add(int a,int b) {
    return a+b;
}

int abs(int a) {
    if(a < 0)
        return -a;
    else
        return a;
}

}
