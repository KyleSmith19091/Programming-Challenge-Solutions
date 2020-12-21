#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

// 2020 = x + y + z
// 2020 - x = y + z => Assume x to be one of the values
// 2020 - x - y = z => Now assume y to be a value which satisfies the equation

int main(){
	cin.tie(0);

    ifstream input("input.txt");
    std::vector<int> yearEntries(200);
    int counter = 0;

    int fx = 0;
    int fy = 0;
    int fz = 0;

    std::string line;
    while(getline(input,line)){
        yearEntries[counter] = stoi(line);    
        counter++;
    }

    sort(yearEntries.begin(),yearEntries.end());
    
    for(int x : yearEntries){
        for(int y : yearEntries){
            int z = 2020 - x - y;
            bool foundz = binary_search(yearEntries.begin(),yearEntries.end(),z);
            if(foundz){
                fx = x;
                fy = y;
                fz = z;  
                break;
            }
        }
    }

    cout << (fx*fy*fz) << "\n";
    
	return 0;
}
