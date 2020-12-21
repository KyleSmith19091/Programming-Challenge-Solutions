#include <cctype>
#include <iostream>
using namespace std;

// Time: O(n)
// Space: O(n) for s?
int main(){
	cin.tie(0);

    // USA - True
    // Kyle - True
    // tAble - False
    // table - True

    string s; cin >> s;

    int numUpper = 0;
    
    for(char c : s){
        if(isupper(c)) numUpper++;
    }

    if(numUpper==s.length()){
        cout << "True\n";
    }else if(isupper(s[0]) && numUpper==1){
        cout << "True\n";
    }else if(numUpper==0){
        cout << "True\n";
    }else{
        cout << "False\n";
    }
	return 0;
}
