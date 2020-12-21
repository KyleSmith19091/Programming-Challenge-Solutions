#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string accum(string s){
    string accumlated;
    for (size_t i = 0; i < s.length(); i++)
    {
        // Convert first letter to uppercase iff it is uppercase
        // Is the value uppercase ? YES add it 
        isupper(s[i]) ? accumlated+=s[i] : accumlated+=(s[i]-32);
        int counter = 0;    
        while(counter < i){
            isupper(s[i]) ? accumlated+=(s[i]+32) : accumlated+=s[i];
            counter++;
        }    
        if(i < s.length()-1){
            accumlated+="-";
        }
    }
    return accumlated;
}


int main(){

    cout << accum("ZpglnRxqenU") << endl;

    return 0;
}