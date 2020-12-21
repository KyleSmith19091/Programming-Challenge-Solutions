#include <cctype>
#include <iostream>
using namespace std;

int main(){

    std::string input;

    cin >> input;
    
    if(isupper(input[0])) std::cout << input << "\n";
    else{
        char c = toupper(input[0]);
        std::cout << c+input.substr(1) << "\n";
    }
     
	return 0;
}
