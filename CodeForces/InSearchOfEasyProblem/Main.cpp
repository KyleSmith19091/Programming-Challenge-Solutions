#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    bool isHard = false;
    int N; cin >> N;

    while(N--){
        int n; cin >> n;
        if(n==1){
            isHard = true;
            break;
        }
    }

    cout << (isHard ? "HARD" : "EASY") << "\n";

	return 0;
}
