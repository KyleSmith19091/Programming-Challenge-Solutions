#include <iostream>
#include <regex>
using namespace std;

int matoi(string str){

    regex regexp("\-\\d+|\\d+"); 

    smatch m;

    regex_search(str,m,regexp);

    string s = m.str();

    
}

int main(){

    matoi("words and +987");

    return 0;
}

