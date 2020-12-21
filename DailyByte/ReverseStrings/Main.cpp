#include <iostream>
using namespace std;

// O(n) where n is the length of the string
int main(){
	cin.tie(0);
    string s;
    getline(cin,s);
    for(int i = s.length()-1; i >= 0; i--){
        cout << s[i];
    }
    cout << "\n";
	return 0;
}
