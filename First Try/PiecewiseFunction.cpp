#include <iostream>
#include <cstdlib>

using namespace std;
const double TINY = 1e-10;

double sin(double x){
    double g = 0;
    double t = x;
    int n = 1;
    do {                  //因为第一项x无论如何要加，所以使用do while

        g += t;
        n++;
        t = -t*x*x/(2*n-1)/(2*n-2);  //根据通项公式撰写
    } while (fabs(t) >= TINY);  //fabs是返回绝对值，fabs是double型使用
    return g;
}

double Function1(double r,double s){
    double value = sqrt(pow(sin(r),2)+pow(sin(s),2));
    return value;
}

double Function2(double r,double s){
    double value = 1/2.0 * sin(r*s);
    return value;
}

int main() {
    double r,s;
    double k = 0;
    cout << "plz enter r and s:";
    cin >> r >> s;
    if(r*r <= s*s){
        k = Function1(r,s);
    } else{
        k = Function2(r,s);
    }
    cout << k << endl;

    return 0;
}
