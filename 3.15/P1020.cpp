#include <iostream>

using namespace std;

int main() {
    double h;
    cin >> h;
    double total = h;
    for (int i = 0; i < 10; ++i) {
        h = h/2;
        total = total + 2*h;
    }
    total = total - 2*h;
    cout << total << endl << h;
    return 0;
}
