#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n = 0;
    int x = 0;

    cin >> n;
    
    std::string ops;
    
    for(int i = 0; i < n; i++){
        cin >> ops;
        if(ops.find("++")!=string::npos){
            x++;
        }else if(ops.find("--")!=string::npos){
            x--;
        }
    }

    std::cout << x << "\n";

    return 0;
}
