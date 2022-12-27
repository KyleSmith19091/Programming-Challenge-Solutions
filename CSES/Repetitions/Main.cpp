#include <iostream>
using namespace std;
int main(){
	cin.tie(0);
    string seq; cin >> seq;
    char search = seq[0];
    int counter = 1;
    int max = 1;
    for(unsigned int i = 1; i < seq.length(); i++){
        if(seq[i] == search){
            counter++;
        }else{
            if(counter > max) max = counter;
            counter = 1;
            search = seq[i];
        }

    }
    
    max = counter > max ? counter : max;

    cout << max << "\n";

	return 0;
}
