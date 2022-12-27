#include <iostream>
#include <vector>
using namespace std;

/*
 
input T;
while T != 0:
    
    input N;
    create vector of size N and init to 0
    
    while N != 0:
        int a; cin >> a;
        for length of vector
            


*/

int main(){
	cin.tie(0);

    int T; cin >> T;
    while(T--) {
        int n; cin >> n;
        vector<string> stack(1,"0");
    
        while(n--) {
            int a; cin >> a;
            for(int i = stack.size() - a >= 0 ? stack.size() - a : 0; i < stack.size(); i++){
                 stack[i] = "1";
            }
        }

        for_each(stack.begin(),stack.end(), [](string s){
            cout << s << "\n";
        });


    }

	return 0;
}
