#include <iostream>
using namespace std;

// O(n)
int main(){
	cin.tie(0);
        
    int n; cin >> n;
    string s; cin >> s;
    int a = 0;
    int d = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i]=='A'){
            a++;
            continue;
        }
        d++;
    }

    if(a > d){
        cout << "Anton\n";
    }else if(d > a){
        cout << "Danik\n";
    }else{
        cout << "Friendship\n";
    }

	return 0;
}
