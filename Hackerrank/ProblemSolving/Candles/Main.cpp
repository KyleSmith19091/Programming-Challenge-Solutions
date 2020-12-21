#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> arr;

    vector<int>::iterator max = max_element(arr.begin(),arr.end());

    int count = count_if(arr.begin(),arr.end(),[&](int i){
        return i == (*max);
    });

    return 0;
}
