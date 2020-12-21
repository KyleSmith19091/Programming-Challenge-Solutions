#include <cctype>
#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    string s; cin >> s;
    int numUpper = 0;
    int numLower = 0;

    for(int i = 0; i < s.length(); i++){
        if(isupper(s[i])){numUpper++;}
        if(islower(s[i])){numLower++;}
    }

    if(numUpper > numLower){
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }else if(numLower > numUpper || numLower==numUpper){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }

    cout << s << "\n";


	return 0;
}
