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
    
    unordered_map<string, int> countMap;

    for(int i = 0; i < arrLength; i++){
        string s = strArr[i].substr(strArr[i].find(",")+1);
        s = s.substr(0,s.find(")"));
        countMap[s]++;
    }

    for(auto i : countMap){
        if(i.second > 2){
            return "0";
        }
    }

    return "1";
}

int main(){
	cin.tie(0);

    string strArr[] =  {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"};
    int arrLength = 5;

    cout << TreeConstructor(strArr, arrLength) << "\n"; 

	return 0;
}
