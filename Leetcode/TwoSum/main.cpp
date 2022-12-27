#include <iostream>
#include <utility>
#include <vector>
#include <unordered_map>

using namespace std;

// O(n)
vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> mapNum;
    int counter = 0;
    for(const auto& num : nums) {
        const int diff = target - num;
        if(mapNum.find(num) != mapNum.end()) {
            return std::vector<int>{mapNum[num], counter};
        } else {
            mapNum[diff] = counter;
        }
        counter++;
    }
    return std::vector<int>();   
}

void printVector(const std::vector<int>& v) {
    if(v.size() > 0) {
        std::cout << "[" << v[0] << ", " << v[1] << "]\n";
    } else {
        std::cout << "[]\n";
    }
}

int main() {
    std::vector<int> nums = {3, 3};
    int target = 6;
    printVector(twoSum(nums,target));
}
