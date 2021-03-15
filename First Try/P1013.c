#include <stdio.h>

int main() {
    double pi = 3.14159;
    int total = 20000;
    int need;
    int h,r;
    scanf("%d %d", &h,&r);
    int volume = h*pi*r*r;
    if (total%volume == 0){
        need = total/volume;
    } else{
        need = total/volume+1;
    }
    printf("%d", need);
    return 0;
}
