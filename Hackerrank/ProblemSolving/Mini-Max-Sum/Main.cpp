#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <cstdint>

using namespace std;

void miniMaxSum(vector<int> arr) {
    
    // Sort the array
    sort(arr.begin(),arr.end());

    // Min
    long int min = 0;
    for(int i = 0; i < arr.size()-1;i++){
        min += arr[i];
    }
    cout << min << " ";
    // Max
    long int max = 0;
    for(int i = 1; i < arr.size();i++){
        max += arr[i];
    }
    cout << max;
}


int main(){

    vector<int> w;

    for(int i = 0; i < 5; i++){
        int c = 0;
        cin >> c;
        w.push_back(c);
    }
   
    miniMaxSum(w);
}
