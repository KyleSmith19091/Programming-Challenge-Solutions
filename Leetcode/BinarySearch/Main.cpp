#include <vector>
#include <iostream>

using namespace std;

void printVector(const std::vector<int>& vec) {
    for(const auto& v : vec) {
        cout << v << " ";
    }
    cout << "\n";
}

int search(vector<int>&, int);

int searchRec(vector<int>& nums, int target, int start, int end) {
    int midIdx = start + (end - start) / 2;

    if(end >= start && midIdx < nums.size()) {
        if(nums[midIdx] == target) {
            return midIdx;
        } else if(target > nums[midIdx]) { // Right
            return searchRec(nums, target, midIdx + 1, end);
        } else { // Left
            return searchRec(nums, target, start, midIdx - 1);
        }
    }
    
    return -1;
    
}


int search(vector<int>& nums, int target) {
    return searchRec(nums, target, 0, nums.size() - 1);
}

int main(){

    std::vector<int> searchVec{-1}; 
    int target = 2;

    std::cout << search(searchVec, target) << "\n";

    return 0;
}
