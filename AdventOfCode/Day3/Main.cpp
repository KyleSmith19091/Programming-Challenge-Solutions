#include <iostream>
#include <fstream>
using namespace std;

int main(){
	cin.tie(0);
    ifstream input("input.txt");

    int numTrees1 = 0;
    int numTrees2 = 209;
    int numTrees3 = 0;
    int numTrees4 = 0;
    int numTrees5 = 0;

    int pos1 = 0;
    int pos3 = 0;
    int pos4 = 0;
    int pos5 = 0;

    bool secondLine = true;

    string line;
    while(getline(input,line)){

        if(line[pos1%31]=='#'){
            numTrees1++;
        }

        if(line[pos3%31]=='#'){
            numTrees3++;
        }

        if(line[pos4%31]=='#'){
            numTrees4++;
        }

        if(line[pos5%31]=='#' && secondLine){
            numTrees5++;
        }
        
        pos1++;
        pos3 += 5;
        pos4 += 7;
        pos5 += 1;

        secondLine ? secondLine = false : secondLine = true;
    }

    cout << numTrees1 << "\n";
    cout << numTrees2 << "\n";
    cout << numTrees3 << "\n";
    cout << numTrees4 << "\n";
    cout << numTrees5 << "\n";

    cout << (numTrees1*numTrees2*numTrees3*numTrees4*numTrees5) << "\n";    

	return 0;
}
