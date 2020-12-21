#include <iostream>
#include <string>
using namespace std;
int main(){

    int n, k, a, num = 0;
    cin >> n >> k;
    string c;

    cin.tie(NULL);


    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if(stoi(c) >= k || stoi(c)==1){
            num++;
        }    
    }

    cout << num << endl;

    return 0;
}