#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string duplicate_encoder(string s){

    string sReturn = ""; // stores encoded values that have been checked
    string checked;
    
    for (int i = 0; i < s.length(); i++)
    {
        const char c = ::tolower(s[i]);
        if(checked.find(c) != string::npos){
            
            for (size_t j = 0; j < checked.length(); j++)
            {
                if(checked[j]==c){
                    sReturn[j] = ')';
                }
            }
            sReturn+=')';
        }else{
            sReturn+='(';
        }
        checked+=c;      
    }
    
    return sReturn;
}


int main(){

    cout << duplicate_encoder("Success") << endl;

    return 0;
}