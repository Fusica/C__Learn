#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int d;
    int rest;
    if (b%c == 0){
        d = c/b;
    } else{
        d = c/b+1;
    }
    if (d < a){
        rest = a - d;
    } else{
        rest = 0;
    }
    printf("%d", rest);
    return 0;
}