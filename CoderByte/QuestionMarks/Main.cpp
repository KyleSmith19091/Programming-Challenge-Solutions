#include <cctype>
#include <iostream>
using namespace std;

string QuestionsMarks(string str) {
  
    int questionCounter = 0;
    int diffFromTen = 0;
    bool search = false;
    
    for(int i = 0; i < str.length(); i++){
        if(isdigit(str[i])){
            if(search){
                if(questionCounter != 3 && str[i] - '0' == diffFromTen){
                    return "false";
                }
                search = false;
                diffFromTen = 0;
                questionCounter = 0;
            }else{
                search = true;
                diffFromTen = 10 - (str[i] - '0');
            }
        }else if(str[i]=='?'){
            questionCounter++;
        }else if(isalpha(str[i])){
            search = false;
            diffFromTen = 0;
            questionCounter = 0;
        }
    }

    return "true";
}

int main(){
	cin.tie(0);

    cout << QuestionsMarks("acc?7??sss?3rr1??????5") << "\n";

	return 0;
}
