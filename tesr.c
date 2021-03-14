#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    double x1,x2;
    if(b*b - 4*a*c == 0){
        printf("x1=x2=%5.5f", (-b+sqrt(b*b-4*a*c))/(2*a));
    } else if (b*b - 4*a*c > 0){
        if ((-b+sqrt(b*b-4*a*c))/(2*a) >= (-b-sqrt(b*b-4*a*c))/(2*a)){
            x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        } else{
            x1 = (-b-sqrt(b*b-4*a*c))/(2*a);
            x2 = (-b+sqrt(b*b-4*a*c))/(2*a);
        }
        printf("x1=%5.5f;x2=%5.5f",x2,x1);
    } else{
        printf("No answer!");
    }
    return 0;
}