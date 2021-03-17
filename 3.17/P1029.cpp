#include <iostream>

using namespace std;

int main() {
    //获取数组以及其长度
    char a[1000];
    for (int i = 0; i < 1000; ++i) {
        a[i] = 0;
    }
    cin >> a;
    int n = 0;
    for (int i = 0; i < 1000; ++i) {
        if ((a[i] != 0)){
            n++;
        }
    }
    //判断此时数组元素是否与前者相同，若不同则将个数和元素值输出
    int total = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i+1] != a[i]) {
            cout << i + 1 - total << a[i];
            total = i + 1;
        }
    }

    return 0;
}
