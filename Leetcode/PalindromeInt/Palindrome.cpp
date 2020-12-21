#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(int x){
    if(x < 0) return false;
    long int rev = 0;
    int rem;

    while(x!=0){
        rem = x%10;
        rev = rev * 10 + rem;
        x/=10;
    }

    cout << rev << endl;

    if(rev == x) return true;

    return false;

}

int main(){

    bool b = isPalindrome(121);

    cout << b << endl;

    return 0;
}