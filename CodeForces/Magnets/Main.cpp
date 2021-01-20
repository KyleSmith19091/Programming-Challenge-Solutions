#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int N; cin >> N;
    if(N==1){
        cout << 1 << "\n";
        exit(0);
    }

    int m; cin >> m;    
    N--;
    int n;
    int groups = 0;

    while(N--){
        cin >> n;
        
        if(m!=n){
            groups++;
        }
        
        m = n;
    }

    cout << groups+1 << "\n";

	return 0;
}
