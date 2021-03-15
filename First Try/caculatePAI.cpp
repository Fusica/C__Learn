#include <iostream>

using namespace std;
double arctan(double x){
    int i = 1;  //作为分母
    double sqr = x * x;  //分子每次增加平方
    double r = 0;
    double e = x;
    while (e/i > 1e-15){  //1e-15是科学计数法表示的10的15次方，避免了使用pow(10,-15)，降低了复杂度
        double f = e/i;
        r = (i % 4 == 1) ? r+f : r-f;
        e = e * sqr;
        i += 2;
    }
    return r;
}

int main() {
    double a = arctan(1/5.000);
    double b = arctan(1/239.000);
    double pai = 16.000*a-4.000*b;
    cout << pai;
    return 0;
}
