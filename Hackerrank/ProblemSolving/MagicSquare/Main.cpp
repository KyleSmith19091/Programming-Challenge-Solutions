#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    
    int M = 15;
    int cost = 0;
    
    for(vector<int> v : s){
        int sum = 0;
        for(int i : v){
            sum+=i;    
        }
        cost+=abs(M-sum);
    }
        
    if(s[0][0] + s[1][1] + s[2][2]!=15){
       cost+=abs(s[0][0] + s[1][1] + s[2][2] - M); 
    }

    if(s[0][2] + s[1][1] + s[2][0]!=15){
        cost+=abs(s[0][2] + s[1][1] + s[2][0] - M);
    }
    
    return cost;
}


int main(){
    
    // 1 to n^2
    // distinct integers
    // M = n(n^2+1)/2
    vector<vector<int>> s;
    vector<int> j = {4,5,8};
    s.push_back(j); 
    j = {2,4,1};
     

    return 0;
}
