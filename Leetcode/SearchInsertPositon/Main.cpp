#include <vector>
#include <iostream>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size();
    int ans = -1;

    while(start < end) {
        int midIdx = start + (end - start) / 2;
        
        if(target == nums[midIdx]) {
            return midIdx;
        }

        if(target < nums[midIdx]) { 
            end = midIdx - 1;
            ans = midIdx - 1;
        } else {
            start = midIdx + 1;
            ans = midIdx + 1;
        }
    }
    
    return ans == -1 ? 0 : ans;
}

int main(){

    std::vector<int> nums{1,3,5,6};
    std::cout << searchInsert(nums, 5) << "\n";
    std::cout << searchInsert(nums, 2) << "\n";
    std::cout << searchInsert(nums, 7) << "\n";
    std::cout << searchInsert(nums, 0) << "\n";

    nums = {1,3};
    std::cout << searchInsert(nums, 2) << "\n";

    return 0;
}
