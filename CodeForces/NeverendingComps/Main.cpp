#include <iostream>
using namespace std;

int main(){
	cin.tie(0);

    int n; cin >> n;
    string home; cin >> home;
    if(n==1){
        cout << "contest\n";
        return 0;
    }
    string f;
    int t = n;

    while(t--){
        cin >> f;
    }

    if(n%2==0){
        cout << "home\n";
    }else{
        cout << "contest\n";
    }



	return 0;
}
