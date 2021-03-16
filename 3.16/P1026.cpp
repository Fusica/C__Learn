#include <iostream>

using namespace std;

int main() {
    int a[25];
    cin >>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]>>a[10]>>a[11]>>a[12]>>a[13]>>a[14]>>a[15]>>a[16]>>a[17]>>a[18]>>a[19]>>a[20]>>a[21]>>a[22]>>a[23]>>a[24];
    int j = 0;
    int k = -1;
    while (j < 25){
        if(j < 5){
            if (a[j] >= a[0] && a[j] >= a[1] && a[j] >= a[2] && a[j] >= a[3] && a[j] >= a[4]){
                if (a[j] <= a[j+5] && a[j] <= a[j+10] && a[j] <= a[j+15] && a[j] <= a[j+20]){
                    k = j;
                }
            }
        }else if(j < 10){
            if (a[j] >= a[5] && a[j] >= a[6] && a[j] >= a[7] && a[j] >= a[8] && a[j] >= a[9]){
                if (a[j] <= a[j+5] && a[j] <= a[j+10] && a[j] <= a[j+15] && a[j] <= a[j-5]){
                    k = j;
                }
            }
        }else if(j < 15){
            if (a[j] >= a[10] && a[j] >= a[11] && a[j] >= a[12] && a[j] >= a[13] && a[j] >= a[14]){
                if (a[j] <= a[j+5] && a[j] <= a[j+10] && a[j] <= a[j-5] && a[j] <= a[j-10]){
                    k = j;
                }
            }
        }else if(j < 20){
            if (a[j] >= a[15] && a[j] >= a[16] && a[j] >= a[17] && a[j] >= a[18] && a[j] >= a[19]){
                if (a[j] <= a[j+5] && a[j] <= a[j-5] && a[j] <= a[j-10] && a[j] <= a[j-15]){
                    k = j;
                }
            }
        }else if(j < 25){
            if (a[j] >= a[20] && a[j] >= a[21] && a[j] >= a[22] && a[j] >= a[23] && a[j] >= a[24]){
                if (a[j] <= a[j-5] && a[j] <= a[j-10] && a[j] <= a[j-15] && a[j] <= a[j-20]){
                    k = j;
                }
            }
        }
        j++;
    }
    if (k == -1){
        cout << "not found";
    } else{
        cout << k/5+1 << " " << k%5+1 << " " << a[k];
    }
    return 0;
}
