#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int n; cin >> n;
    int numRoomsAvaliable = 0;

    for(int i = 0; i < n; i++){
        int p,q; cin >> p >> q;
        if(q-p >= 2) numRoomsAvaliable++;
    }

    cout << numRoomsAvaliable << "\n";

	return 0;
}
