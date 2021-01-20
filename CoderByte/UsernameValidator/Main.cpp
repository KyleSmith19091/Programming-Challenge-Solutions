#include <cctype>
#include <iostream>

using namespace std;

string CodelandUsernameValidation(string str) {

  if((str.length() < 4 || str.length() > 25) || !isalpha(str[0]) || str[str.length()-1]=='_'){
    return "false";
  }

  for(int i = 0; i < str.length(); i++){
      if(!isalnum(str[i]) && str[i]!='_'){
        return "false";
      }	
  }

  return "true";

}

int main(){
	cin.tie(0);

	return 0;
}
