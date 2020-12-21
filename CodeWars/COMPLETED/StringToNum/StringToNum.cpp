#include <iostream>
#include <sstream>


int string_to_number(std::string s){
    std::stringstream d(s);
    int b = 0;
    d >> b;
    return b;
}

int main(){

    string_to_number("123456");
    string_to_number("352605");
    string_to_number("-321405");
    string_to_number("123456");

    return 0;
}