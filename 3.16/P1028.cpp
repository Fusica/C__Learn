#include <iostream>

using namespace std;

int main() {
    //获取数组以及其长度
    char a[150];
    for (int i = 0; i < 150; ++i) {
        a[i] = 0;
    }
    cin >> a;
    int n = 0;
    for (int i = 0; i < 150; ++i) {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122)){
            n++;
        }
    }

    //完成右移
    for (int i = 0; i < n; ++i) {
        a[i] = a[i]+3;
    }

    //完成大小写转换
    for (int i = 0; i < n; ++i) {
        if ((a[i]>=65)&&(a[i]<=90))
        {
            a[i] = a[i] + 32;
        }
        else if((a[i]>=97)&&(a[i]<=122))
        {
            a[i] = a[i] - 32;
        }
    }
    
    //
    int temp;
    for (int i = 0; i < n/2; ++i) {
        temp = a[n-i-1];
        a[n-i-1] = a[i];
        a[i] = temp;
    }

    cout << a;
    return 0;
}
