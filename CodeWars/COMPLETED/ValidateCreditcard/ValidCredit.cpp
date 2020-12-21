#include <iostream>
#include <string>
#include <vector> 
#include <numeric>
using namespace std;


bool validate(long long int n){
    string s = to_string(n);
    vector < int > digit(s.length());
    int sum = 0;
    
    // Read the number into digits
    for (size_t i = 0; i < digit.size(); i++)
    {
        digit[i] = n % 10;
        n /= 10;
    }

    // Reverse the digit vector
    reverse(digit.begin(), digit.end());
    
    size_t i;
    digit.size() & 1 ? i = 1 : i = 0;
    for (i; i < digit.size()-1; i+=2)
    {
        // Multiply by 2
        digit[i] *= 2;

        // Check if value is greater than 9
        digit[i] > 9 ? digit[i]-=9 : digit[i]=digit[i];

    }

    sum = accumulate(digit.begin(),digit.end(),0);
    
    return sum % 10 == 0 ? 1 : 0;
}



int main(){

    system("clear");

    cout << validate(891) << endl;

    return 0;
}