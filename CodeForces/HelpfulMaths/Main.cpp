#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    std::string input;
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cin >> input;
    
    std::string::iterator i;

    for(i=input.begin(); i!=input.end(); i++){
        char c = *i;
        if(c=='1') num1++;
        else if(c=='2') num2++;
        else if(c=='3') num3++;
    }

    if(input.length()==1){
        std::cout << input << "\n";
        return 0;
    }
    
    string output = "";

    while(num1--){
        output+="1+";
    }

    while(num2--){
        output+="2+";
    }

    while(num3--){
        output+="3+";
    }

    std::cout << output.substr(0,output.length()-1) << "\n";


    


    
    return 0;
}

