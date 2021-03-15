#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if (a == 1){
        cout << "End";
    } else{
        while (a != 1){
            if(a%2 != 0){
                cout << a << "*3+1=" << 3*a+1 << endl;
                a = 3*a+1;
            } else{
                cout << a << "/2=" << a/2 << endl;
                a = a/2;
            }
        }
        cout << "End";
    }
    return 0;
}
