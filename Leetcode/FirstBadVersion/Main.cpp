#include <iostream>

using namespace std;

bool isBadVersion(int);

int searchRec(int target, int start, int end) {

    int ans = 0;

    while(start <= end) {
        int midIdx = start + (end - start) / 2;
        if(!isBadVersion(midIdx)) {
            start = midIdx + 1;
        } else {
            ans = midIdx;
            end = midIdx - 1;
        }
    }
    
    return ans;
}
    

int firstBadVersion(int n) {
    
}

int main(){

    return 0;
}
