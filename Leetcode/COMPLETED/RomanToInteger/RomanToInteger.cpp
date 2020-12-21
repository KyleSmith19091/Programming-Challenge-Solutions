#include <iostream>
#include <map>
using namespace std;

int romanToInt(string s){
    map<char,int> romanNumerals;
    romanNumerals['I'] = 1;
    romanNumerals['V'] = 5;
    romanNumerals['X'] = 10;
    romanNumerals['L'] = 50;
    romanNumerals['C'] = 100;
    romanNumerals['D'] = 500;
    romanNumerals['M'] = 1000;

    int sum = 0;
    int previousNum = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        int num = 0;

        if(c == 'I' && (s[i+1] == 'V' || s[i+1] == 'X')){
            num = -1;
        }else if(c == 'X' && (s[i+1] == 'L' || s[i+1] == 'C')){
            num = -10;
        }else if(c == 'C' && (s[i+1] == 'D' || s[i+1] == 'M')){
            num = -100;
        }else{
            map<char, int>::iterator it = romanNumerals.find(c);
            num = it->second;
        } 
        sum += num;
    }
    return sum;
}


int main(){


    cout << romanToInt("MCM") << endl;

    return 0;
}