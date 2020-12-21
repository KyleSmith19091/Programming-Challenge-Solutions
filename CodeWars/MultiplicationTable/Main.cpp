#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n){
    
    vector<vector<int>> v;
    
    for(int i = 0; i < n; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            temp.push_back(j+1*(i+1));
        }
        v.push_back(temp);
    }

    cout << "Done!\n";
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j];
        }
        cout << "\n";
    }

    return v;
}

int main(){
   
    multiplication_table(3);
    

    return 0;
}
