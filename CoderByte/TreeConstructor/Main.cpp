#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

// {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"}

struct Node{
    char child;
    char parent;
};

string TreeConstructor(string strArr[], int arrLength) { 
    
    unordered_map<string, int> parentCountMap;
    unordered_map<string, int> childCountMap;

    for(int i = 0; i < arrLength; i++){

      string child = strArr[i].substr(1,strArr[i].find(",")-1);
      string parent = strArr[i].substr(strArr[i].find(",") + 1);
      parent = parent.substr(0, parent.find(")"));

      parentCountMap[parent]++;
      childCountMap[child]++;
    }

    for(auto i : parentCountMap){
        if(i.second > 2){
            return "0";
        }
    }
    

    for(auto i : childCountMap){
        if(i.second > 1){
            return "0";
        }
    }

    return "1";
}

int main(){
	cin.tie(0);

    string strArr[] =  {"(2,5)", "(2,6)"};
    int arrLength = sizeof(strArr)/sizeof(strArr[0]);

    cout << TreeConstructor(strArr, arrLength) << "\n"; 

	return 0;
}
