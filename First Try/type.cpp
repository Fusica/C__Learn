#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a%7==0 || a%10==7){
        cout << "符合规定："<< a << endl;
    }
    return 0;
}
