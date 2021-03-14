#include <stdio.h>
#include <math.h>

int main() {
    int a;
    double b,c;
    scanf("%d %lf %lf", &a,&b,&c);
    int d = ceil(c/b);
    printf("%d",a-d);
    return 0;
}
