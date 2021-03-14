#include <stdio.h>
#include <math.h>

int main() {
    float f;
    scanf("%f",&f);
    int z;
    if (f > 0){
        z = floor(f);
    } else{
        z = ceil(f);
    }
    printf("%d",z);
    return 0;
}