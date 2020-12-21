#include <iostream>
#include <map>
using namespace std;

int main(){
	cin.tie(0);

    std::string jewels,stones;
    cin >> jewels;
    cin >> stones;
    
    map<char,bool> mp;
    int counter = 0;
    
    for(int i = 0; i < jewels.size(); i++){
        mp[jewels[i]] = true;	
    }

    for(int i = 0; i < stones.size(); i++){
        if(mp[stones[i]]) counter++;	
    }

    cout << counter << "\n";

	return 0;
}
