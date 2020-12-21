#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0);
    
    string s; cin >> s;
    int distinct = 0;

    for(int i = 0; i < s.length(); i++){
        bool nonDistinct = true;
        for(int j = 0; j < i; j++){
            if(s[i]==s[j]){
                nonDistinct=false;
                break;
            }
        }
        if(nonDistinct){
            distinct++;
        }
    }
    
    std::cout << (distinct&1 ? "IGNORE HIM!" : "CHAT WITH HER!") << "\n";
    	
    return 0;
}
