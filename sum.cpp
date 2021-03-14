#include <iostream>
using namespace std;

int main() {
    int radius;
    cout << "plz enter your radius:";
    cin >> radius;
    const double pi(3.14159); //浮点数不能比较大小，是以近似形式存储的
    double semester = 2*pi*radius;
    cout << "Semester is: " << semester << endl;
    return 0;
}
