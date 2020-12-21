#include <iostream>
using namespace std;

// O(n)
// Space: O(n)
int main(){
	cin.tie(0);

    string s; cin >> s;
    int L=0, R=0, U=0, D=0;

    for(int i = 0; i < s.length(); i++){
        if(s[i]=='L') L++;
        if(s[i]=='R') R++;
        if(s[i]=='U') U++;
        if(s[i]=='D') D++;
    }
    
    if((L==1 && R==1) || (U==1 && D==1)){
        cout << "True\n";
        return 0;
    }

    if(L%2==0 && R%2==0 && U%2==0 && D%2==0){
        cout << "True\n";
        return 0;
    }

    cout << "False\n";
    

	return 0;
}
