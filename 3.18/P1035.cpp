/**
 * @Author: Max
 * @Time: 3/18/21 10:02
 */

#include <iostream>

using namespace std;

int main() {
    int result[40000];
    int h=1,num,res,i,j,medium;
    cin>>num;
    result[0]=1;
    for(i=1;i<=num;i++)
    {
        res=0;
        for(j=0;j<h;j++)
        {
            medium=result[j]*i+res;  //
            result[j]=medium%10;
            res=medium/10;
        }
        while(res)
        {
            result[h++]=res%10;
            res/=10;
        }
    }
    for(i=h-1;i>=0;i--)
    {
        cout<<result[i];
    }
    return 0;
}
