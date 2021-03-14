#include <iostream>

using namespace std;

bool PalindromeNumber(int x) {  //
    unsigned i = x;
    unsigned m = 0;
    while (i>0){
        m = m * 10 + i % 10;
        i /= 10;
    }
    return m == x;
}


int main() {
    for (int i = 11; i < 1000; ++i) {
        if(PalindromeNumber(i) && PalindromeNumber(i*i) && PalindromeNumber(i*i*i)){
            cout << i << endl;
        }
    }
    return 0;
}
