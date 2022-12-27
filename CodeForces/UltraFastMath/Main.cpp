#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;

int main(){
	cin.tie(0);

    std::string N; cin >> N;
    std::string W; cin >> W;
    std::string out = "";

    for(int i = 0; i < N.length(); i++){
        int n = N[i] - '0';
        int w = W[i] - '0';
        out += to_string(n^w); 
    }

    cout << out << "\n";

	return 0;
}
