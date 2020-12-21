#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s){
    
    string suff = s.substr(s.length()-2,s.length());

    if(suff=="PM"){
        // Get the first two numbers
        string hh = s.substr(0,2);
        // Add 12
        int mhh = 0;
        if(hh=="12"){
            mhh = 12;
        }else{
            mhh = stoi(hh) + 12;
        }
        // Format
        string sMhh;
        if(mhh<10){
            sMhh = to_string(mhh);
            sMhh+='0';
        }else{
            sMhh = to_string(mhh);
        }

        // Convert back to string
        return sMhh + s.substr(2,s.length()-4);
    }else{

        string hh = s.substr(0,2);
        string sMhh = "";
        if(hh=="12"){
            return "00" + s.substr(2,s.length()-4);
        }

        return s.substr(0,s.length()-2);
    }
    
}

int main(){
    
    string s = "12:45:54PM";

    cout << timeConversion(s) << "\n";

    return 0;
}

