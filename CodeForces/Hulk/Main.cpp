#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int N; cin >> N;

    std::string out = "";

    if(N==1){
        cout << "I hate it\n";
        return 0;
    }

    for(int i = 1; i < N; i++){
        out += "I";
        out += (!(i&1)) ? " love" : " hate";
        out += " that ";
    }

    cout << (out += (!(N&1)) ? "I love it\n" : "I hate it\n");

	return 0;
}
