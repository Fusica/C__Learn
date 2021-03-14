#include <iostream>
#include <vector>

using namespace std;

int findRepeatNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i = 0;
    while(nums[i] != nums[i+1]){
        i++;
    }
    return nums[i];
}


int main() {
    int nums[7] = {2, 3, 1, 0, 2, 5, 3};
    vector<int> v(nums,nums+7);
    int a  = findRepeatNumber(v);
    cout << a;

    return 0;
}
