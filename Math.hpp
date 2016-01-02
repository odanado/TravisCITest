#include <unordered_map>
namespace ns {

int add(int a,int b) {
    std::unordered_map<int,int> mp;
    mp.emplace(1,10);
    return a+b;
}

int abs(int a) {
    if(a < 0)
        return -a;
    else
        return a;
}

}
