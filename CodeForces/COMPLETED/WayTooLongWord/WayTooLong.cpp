#include <iostream>
#include <string>
using namespace std;

string convertLongWord(string line){
    if(!(line.length()>10)) return line;
    int l = line.length()-2;
    return line.substr(0,1) + to_string(l) + line.substr(line.length()-1,line.length());
}

int main(){

    // PROBLEM ID 158A

    int n;
    int iCounter = 0;
    cin >> n;

    string lines[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin,lines[i],' ');
        cout << lines[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << convertLongWord(lines[i]) << endl;
    }
    

    return 0;
}