#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    std::string s; cin >> s;
    std::string t; cin >> t;
    int iCounter = 0;

    if(s.length()!=t.length()){
        cout << "NO\n";
        return 0;
    }

    for(int i=0,j=s.length()-1; i < s.length() && j >= 0; i++, j--){
        if(s[i]==t[j]) iCounter++;
    }

    if(iCounter==s.length()){
        cout << "YES\n";
        return 0;
    }

    cout << "NO\n";

	return 0;
}
