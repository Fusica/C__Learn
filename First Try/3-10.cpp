#include <iostream>

using namespace std;

void move(char src, char dest){
    cout << src << "-->" << dest << endl;
}

int hanoi(int n, char src, char medium, char dest){
    int x = 0;
    if (n == 1){
        move(src, dest);
        x++;
    }
    else{
        hanoi(n-1, src, dest, medium);
        x++;
        move(src, dest);
        hanoi(n-1, medium, src, dest);
        x++;
    }
    return x;
}

int main() {
    int m;
    cout << "Enter disks: ";
    cin >> m;
    cout << "steps:" << m << endl;
    hanoi(m, 'A', 'B', 'C');
    return 0;
}
