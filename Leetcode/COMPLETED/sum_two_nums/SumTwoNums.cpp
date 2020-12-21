#include <iostream>
#include <vector>
#include <unordered_map>
#include <cassert>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    vector<int> indices;

    for (int i = 0; i < nums.size(); i++){
        m[nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        int x = nums[i];
        int value = target - x;
        auto it = m.find(value);
        if(it != m.end()){
            indices.push_back(i);
            indices.push_back(it->second);
            return indices; 
        }          
    }
    return indices;
}

int main(){

    vector<int> nums;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);

    int target = 9;

    vector<int> d = twoSum(nums,target);
    cout << d[0] << " " << d[1] << endl;

    return 0;
}