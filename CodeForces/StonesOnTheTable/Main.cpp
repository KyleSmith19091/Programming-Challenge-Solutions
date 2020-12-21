#include <iostream>
using namespace std;

// O(n)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s; cin >> s;
    int numPairs = 0;

    for(int i = 0; i < s.length()-1; i++){
        if(s[i]==s[i+1]){
            numPairs++; 
        }
    }
    
    cout << numPairs << "\n";

	return 0;
}
