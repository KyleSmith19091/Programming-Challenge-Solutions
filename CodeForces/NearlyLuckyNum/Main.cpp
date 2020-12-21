#include <cstdint>
#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    // Lucky numbers := contain 4 and 7
    // Nearly lucky numbers := num lucky = 4 v 7

    std::string s; cin >> s;
    int length = s.length();
    int luckNumCount = 0;

    for(int i = 0; i < length; i++){
        if(s[i]=='4' || s[i]=='7') luckNumCount++;
    }
    
    if(luckNumCount==4 || luckNumCount==7){
        cout << "YES\n";
        return 0;
    }

    cout << "NO\n";

	return 0;
}
