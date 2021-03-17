/**
 * @Author: Max
 * @Time: 3/17/21 14:46
 */

#include <iostream>

using namespace std;

double F(double n,double x){
    if (n == 1){
        return x/(n+x);
    } else {
        F(n-1,x);
    }
}

int main() {
    int x,n;
    cin >> x >> n;
    cout << F(n,x);

    return 0;
}
