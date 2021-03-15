#include <iostream>
#include <vector>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int count = 0;
    int length = flowerbed.size();
    if (length == 1) {
        if (flowerbed[0] == 0) {
            count++;
        } else if (flowerbed[0] == 1) {
            count = 0;
        }
    } else if(length == 2){
        if (flowerbed[0] == 0 && flowerbed[1] == 0)
            count++;
    }else {
        if (flowerbed[0] == 0 && flowerbed[1] == 0) {
            count++;
        }
        if (flowerbed[length - 1] == 0 && flowerbed[length - 2] == 0) {
            count++;
        }
        for (int i = 1; i < length - 1; i++) {
            if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] == 0) {
                count++;
                i++;
            }
        }
    }
        if (count >= n) {
            return true;
        } else {
            return false;
        }
}

int main() {
    vector<int> arr = {0, 0};
    bool a = canPlaceFlowers(arr,2);
    cout << a << endl;
    return 0;
}
