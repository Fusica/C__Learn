//WA,

#include <iostream>

using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int a[m];
    //清空数组a
    for (int i = 0; i < m; ++i) {
        a[i] = -1;
    }
    //初始化数组b
    int b[n];
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int count = 0;
    int k = 0;
    int i = 0;
    loop: for (i; i < n; ++i) {     //文章中每一个词
        for (int j = 0; j < m; ++j) {
            if (a[j] != b[i]){
                continue;
            } else{
                i++;
                goto loop;
            }
        }
        count++;
        a[k%3] = b[i];
        k++;
    }
    cout << count;

    return 0;
}
