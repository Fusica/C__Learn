/**
 * @Author: Max
 * @Time: 3/17/21 17:00
 */

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = 1;
    for (int i = 0; i < n; ++i) {
        total = total*2;
    }
    cout << total;
    return 0;
}
