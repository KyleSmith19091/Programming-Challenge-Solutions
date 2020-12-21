#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int reverse(int x){
    long long int rem = 0;
    long long int rev = 0;

    while(x != 0){
        rem = x % 10;
        rev=rev*10 + rem;
        x/=10;
    }    
    if(rev > 2147483647 || rev < -2147483648) return 0;
    
    
    return rev;
}

int main(){


    // 1534236469
    cout << reverse(-123) << endl;

    return 0;
}
