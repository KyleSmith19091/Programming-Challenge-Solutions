#include <iostream>
#include <stack>
using namespace std;

string BracketMatcher(string str) {

  stack<char> s;

  if(str.length()==0 || str.length()==1) return "0";

  for(char c : str){
    if(c=='('){
      s.push(c);
      continue;
    }

    if(c==')'){
      if(s.size()==0) return "0";
      s.pop();
    }
  }

  if(s.empty()) return "1";

  return "0";

}

int main(){
	cin.tie(0);
    
    cout << BracketMatcher("(c(oder)) b(yte)") << "\n";

	return 0;
}
