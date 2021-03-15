#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    double b[4] = {0,0,0,0};
    for (int i = 0; i < n; ++i) {
        if(a[i] >= 0 && a[i] <= 18){
            b[0]++;
        } else if(a[i] >= 19 && a[i] <= 35){
            b[1]++;
        } else if(a[i] >= 36 && a[i] <= 60){
            b[2]++;
        } else if(a[i] >= 60){
            b[3]++;
        }
    }
    double h,i,j,k;
    h = b[0]/n;
    i = b[1]/n;
    j = b[2]/n;
    k = b[3]/n;
    cout << fixed<<setprecision(2) << h*100 << "%" << endl;
    cout << fixed<<setprecision(2) << i*100 << "%" << endl;
    cout << fixed<<setprecision(2) << j*100 << "%" << endl;
    cout << fixed<<setprecision(2) << k*100 << "%" << endl;

    return 0;
}
