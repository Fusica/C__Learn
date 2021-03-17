#include <iostream>

using namespace std;

int main() {
    int total;
    cin >> total;
    int a = total/2;
    int b = total - a;
    int max = 0;
    while (a != 0){
        for (int i = 2; i < a; ++i) {
            if (a%i != 0 && b%i != 0){
                continue;
            } else{
                a--;
                b++;
                i = 2;
            }
        }
        if(a*b > max){
            max = a*b;
            a--;
            b++;
        } else{
            a--;
            b++;
        }
    }
    cout << max;
    return 0;
}
