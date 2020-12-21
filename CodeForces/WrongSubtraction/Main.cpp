#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int n; cin >> n;
    int k; cin >> k;
    int lastDigit = 0;

    while(k--){
        lastDigit = n%10;
        if(lastDigit != 0){
            n--;
        }else if(lastDigit == 0){
            n /= 10;
        }
    }
    
    std::cout << n << "\n";


	return 0;
}
