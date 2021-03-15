#include <iostream>

using namespace std;

double power(int x,int n){
    int val = 1;
    while (n--)
        val *= x;
    return val;
}


int main() {
    int value = 0;
    cout << "plz enter an 8 bit number:";
    for (int i = 7; i >0 ; --i) {
        char ch;
        cin >> ch;
        if (ch == '1')
            value += static_cast<int>(power(2,i)); //进行了强制类型转换
    }
    cout << value;
    return 0;
}
