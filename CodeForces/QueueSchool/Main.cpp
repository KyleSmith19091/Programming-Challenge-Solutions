#include <iostream>
#include <cmath>
using namespace std;
// O(N * T)
int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);

    int n,t; cin >> n >> t;
    string s; cin >> s;
    string newqueue = s;

    if(t==0){
        cout << s << "\n";
        exit(0);
    }

    for(int i = 0; i < t; i++){
        s = newqueue;
        for(int j = 0; j < n-1; j++){
            if(s[j]=='B' && s[j+1]=='G'){
                swap(newqueue[j],newqueue[j+1]);
            }
        }
    }

    cout << newqueue << "\n";

	return 0;
}
