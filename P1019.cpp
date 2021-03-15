#include <iostream>

using namespace std;

int main() {
    long double a,b;
    int n;
    long double use = 1;
    cin >> a >>b >> n;
    for (int i = 0; i < n; ++i) {
        use = use * 0.1;
    }
    int final = (int)a/b/use;
    cout << final%10 << endl;
    return 0;
}
