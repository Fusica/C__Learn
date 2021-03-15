#include <iostream>

using namespace std;


int main() {
    long long a,b;
    long long total = 1;
    cin >> a >> b;
    for (int i = 0; i < b; ++i) {
        total = total * a;
    }
    long long h = total/100%10;
    long long j = total/10%10;
    long long k = total%10;
    cout << h << j << k;
    return 0;
}
