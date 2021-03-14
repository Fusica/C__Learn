
#include<iostream>
#include<cstring>
using namespace std;

int i = 0;

void turn(int n,int *c)
{
    if(n == 0) return;
    else
    {
        c[i]=n%2;
        i++;
        turn(n/2,c);
    }
}

int main() {
    int n;
    cin >> n;
    int cc[10000];
    if (n == 0) {
        cout << '0';
    }
    turn(n, cc);
    for (int j = i - 1; j >= 0; j--)
        cout << cc[j];

    return 0;
}
