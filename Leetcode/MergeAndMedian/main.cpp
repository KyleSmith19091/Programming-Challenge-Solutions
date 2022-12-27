#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <cmath>

using namespace std;

std::vector<int> mergeTwoLists(std::vector<int>& list1, std::vector<int>& list2) { // O(n+m)
	if(list1.empty()) {
		return list2;
	}
		
	if(list2.empty()) {
		return list1;
	} 
		
    std::vector<int> mergedList;

    while(!list1.empty() && !list2.empty()) {
        if(list1.front() <= list2.front()) {
            mergedList.push_back(list1.front());
            list1.erase(list1.begin());
        } else {
            mergedList.push_back(list1.front());
            list2.erase(list2.begin());
        }
    }

    if(!list1.empty()) {
        for(const auto& v : list1) {
            mergedList.push_back(v);
        }
    }

    if(!list2.empty()) {
        for(const auto& v : list2) {
            mergedList.push_back(v);
        }
    }

    return mergedList;
}

constexpr bool isOdd(const size_t& v) {
    return v & 1;
}

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    std::vector<int> mergedList;
    std::merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), std::back_inserter(mergedList)); // O(m+n)

    if(isOdd(mergedList.size())) { // isOdd
        return mergedList[floor(mergedList.size() / 2)];
    } 

    auto halfIdx = mergedList.size() / 2;
    return (double)(mergedList[halfIdx] + mergedList[halfIdx-1]) / 2;
}

int main() {

    std::vector<int> list1{1,3};
    std::vector<int> list2{2};
    
    auto ans = findMedianSortedArrays(list1, list2);

    std::cout << ans << "\n";

    return 0;
}
