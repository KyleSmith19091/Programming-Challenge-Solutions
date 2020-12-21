#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);

    // given n
    // either mult n*2
    // or n/6 iff it is divisble by 6
    // 1 : 0
    // 2 : -1
    // 3 : 2
    // 12 : -1
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n==1){ cout << 0 << "\n"; continue; }
        if(n==2){ cout << -1 << "\n"; continue; }
        
        int count = 0;
        bool p = true;

        while(n!=1){

            if(n%6!=0 && n%2==0){
                p = false;
                break;
            }

            if(n%6==0){
                n /= 6;
                count++;
                continue;
            }else{
                n *= 2;
                count++;
            }
        }

        if(p){
            cout << count << "\n";
        }else {
            cout << -1 << "\n";
        }
    }



    

	return 0;
}
