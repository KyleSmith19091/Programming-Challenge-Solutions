#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);

    std::string s1;
    std::string s2;

    cin >> s1;
    cin >> s2;
    
    for(int i = 0; i < s1.length(); i++){
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }

    int val = strcmp(s1.c_str(), s2.c_str());

    if(val==0) std::cout << 0 << "\n";
    else if(val<0) std::cout << -1 << "\n";
    else if(val>0) std::cout << 1 << "\n";

    return 0;

}
