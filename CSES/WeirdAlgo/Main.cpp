#include <iostream>
#include <cstdint>
using namespace std;
int main(){
	cin.tie(0);
    int_fast64_t n; cin>>n;
    while(n != 1){
        cout << n << " ";
        if((n & 1) == 0){ // even
            n >>= 1;
        }else{
            n = n * 3 + 1;
        }
    }
    cout << 1 << "\n";
	return 0;
}
