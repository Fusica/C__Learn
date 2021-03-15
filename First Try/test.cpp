#include <stdio.h>
#include <stdlib.h>


int majorityElement(int* nums, int numsSize){
    int i;
    int* b = (int *)malloc(sizeof(int)*(numsSize+1));
    for(i=0;i<numsSize;++i){
        b[nums[i]]++;
    }
    int mainEle = numsSize/2;
    int max = 0;
    int j = 0;
    for(i=0;i<=numsSize;i++){
        if(b[i]>max)
            max = b[i];
            j = i;
    }
    if(max>mainEle)
        return j;
    else
        return -1;
}

int main() {
    int a[9]={1,2,5,9,5,9,5,5,5};
    int b = majorityElement(a,9);
    printf("%d",b);
    return 0;
}
