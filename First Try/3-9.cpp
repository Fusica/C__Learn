#include <iostream>

using namespace std;

int comn(int n, int k){
    if (k>n)
        return 0;
    else if (n == k || k == 0)
        return 1;
    else
        return comn(n-1,k) + comn(n-1,k-1);
}

int main() {
    int n, k;
    cout << "输入n、k: ";
    cin >> n >> k;
    cout << comn(n, k) <<endl;
    return 0;
}
