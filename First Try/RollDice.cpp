#include <iostream>
#include <cstdlib>
using namespace std;

enum Status{WIN,LOSE,PALYING};

int rollDice(){
    int die1 = 1 + rand()%6;
    int die2 = 1 + rand()%6;
    int sum = die1 + die2;
    return sum;
}

int main() {
    int sum,myPoint;
    Status status;
    unsigned seed;
    cout << "输入你想使用的种子:";
    cin >> seed;
    srand(seed);
    sum = rollDice();
    cout << "现在的点数是：" << sum << endl;
    switch (sum) {
        case 7:
        case 11:
            status = WIN;
            break;
        case 2:
        case 3:
        case 12:
            status = LOSE;
            break;
        default:
            status = PALYING;
            myPoint = sum;
    }
    while (status == PALYING){
        sum = rollDice();
        if (myPoint == sum)
            status = WIN;
        else if (sum == 7)
            status = LOSE;
        cout << "现在的点数是：" << sum << endl;
    }
    if (status == WIN)
        cout << "You win !";
    else
        cout << "You lose !";

    return 0;
}
