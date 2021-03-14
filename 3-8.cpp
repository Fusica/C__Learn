#include <iostream>

using namespace std;

//计算n的阶乘
unsigned fac(unsigned n){
    unsigned result;
    if(n == 0)
        result = 1;
    else
        result = fac(n-1) * n;
    return result;
}

int main() {
    unsigned n;
    cin >> n;
    unsigned y = fac(n);
    cout << n << "! = " << y;

    return 0;
}
