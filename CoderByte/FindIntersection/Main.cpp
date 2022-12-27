#include <iostream>
#include <iterator>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

void trim(string &str) {
  // trim trailing spaces
  size_t endpos = str.find_last_not_of(" \t");
  size_t startpos = str.find_first_not_of(" \t");
  if (std::string::npos != endpos) {
    str = str.substr(0, endpos + 1);
    str = str.substr(startpos);
  } else {
    str.erase(std::remove(std::begin(str), std::end(str), ' '), std::end(str));
  }
}

string FindIntersection(string strArr[], int arrLength) {
    
    set<int> set1;
    set<int> set2;
    
    istringstream is(strArr[0]);
    string value;
    while(getline(is,value,',')){
        trim(value);
        set1.insert(stoi(value));
    }

    is = istringstream(strArr[1]);
    while(getline(is,value,',')){
        trim(value);
        set2.insert(stoi(value));
    }

    // Calculate the length of the smaller set
    vector<int> output;
    string sReturn;
    set_intersection(set1.begin(),set1.end(),set2.begin(),set2.end(),back_inserter(output));
    
    for(auto i : output){
        sReturn += to_string(i) + ",";
    }

    return sReturn.substr(0,sReturn.length()-1);
}

int main(){
	cin.tie(0);

    string s[] = {"2, 5, 7, 10, 11, 12", "2, 7, 8, 9, 10, 11, 15"};
    int size = sizeof(s)/sizeof(s[0]);

    cout << FindIntersection(s, size) << "\n";


	return 0;
}
