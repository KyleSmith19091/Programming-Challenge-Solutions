#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void incrementYear(std::string& year){
    int t = stoi(year);
    t++;
    year = to_string(t);
}

bool hasUniqueDigits(std::string year){
    std::vector<char> checkedVals;
    for(char c : year){
        if(!checkedVals.empty()){
            bool nonUniqueFound = false;
            for(char d : checkedVals){
                if(c==d){
                    nonUniqueFound = true;
                    break;
                }
            }
            if(nonUniqueFound){
                return false;
            }
            checkedVals.push_back(c);
        }
    }
    return true;
}

int main(){
	cin.tie(0);

    string year; cin >> year;
    string startYear = year;

    incrementYear(year);

    while(true) {
        bool d = hasUniqueDigits(year);
        if(d) break;
        incrementYear(year);
    }

    cout << year << "\n";

	return 0;
}
