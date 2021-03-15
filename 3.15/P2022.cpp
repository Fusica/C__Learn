#include <iostream>

using namespace std;

int main() {
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n;
    int arr[7];
    arr[0] = a+b;
    arr[1] = c+d;
    arr[2] = e+f;
    arr[3] = g+h;
    arr[4] = i+j;
    arr[5] = k+l;
    arr[6] = m+n;
    int max = 0;
    int x;
    for (int i1 = 0; i1 < 7; ++i1) {
        if (arr[i1] > max){
            max = arr[i1];
            x = i1+1;
        }
    }
    cout << x;
    return 0;
}
