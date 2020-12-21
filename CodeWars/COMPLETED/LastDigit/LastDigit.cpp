#include <iostream>
#include <string>
#include <cmath>
#define hello std::cout << "Hello World" << endl;

using namespace std;

int Modulo(int a, const string &str){

    int mod = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        mod = (mod * 10 + str[i] - '0') % a;
    }
    return mod;
}

int last_digit(const string &a, const string &b){

    int len_a = a.length(), len_b = b.length();

    // if a and b are both 0
    if(len_a == 1 && len_b == 1 && a[0] == '0' && a[0] == '0'){
        return 0;
    }

    // if exponent is 0
    if(len_b == 1 && b[0] == '0'){
        return 1;
    }

    // if base is 0
    if (len_a == 1 && a[0] == '0'){
        return 0;
    }

    // if exponent is divisible by 4 that means last 
    // digit will be pow(a,4) % 10
    // if exponent is not divisible by 4 that means last
    // digit will be pow(a,b%4) % 10
    int exp = (Modulo(4,b)==0) ? 4 : Modulo(4,b);

    int res = pow(a[len_a-1] - '0',exp);

    return res%10;
}

int main(){
    
    last_digit("4", "1");

    return 0;
}