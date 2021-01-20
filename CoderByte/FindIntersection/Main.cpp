#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string FindIntersection(string strArr[], int arrLength) {
    
    unordered_map<char, int> countMap;
    
    for(int i = 0; i < strArr[0].length(); i++){
        countMap[strArr[0][i]]++;
    }

    for(int i = 0; i < strArr[1].length(); i++){
        countMap[strArr[1][i]]++;	
    }
    
    for(auto i : countMap){
        if(i.second > 1){
            cout << i.first << " " << i.second << "\n";
        }
    }
    
    return "";
}

int main(){
	cin.tie(0);

    string s[] = {"1,2,3,4,5","1,3,5,6,7,3,5"};
    int size = sizeof(s)/sizeof(s[0]);

    FindIntersection(s, size);


	return 0;
}
