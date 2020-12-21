#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
	cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    string data;
    std::vector<int> v(N);
    
    for(int i = 0; i < N; i++){
        cin >> v[i];	
    }
     
    int d = 0,rb=0,re=0;
    cin >> d;
    cin >> rb >> re;
    v.erase(v.begin()+(d-1));
    v.erase(v.begin()+(rb-1),v.begin()+(re-1));
    
    cout << v.size() << "\n";
    for_each(v.begin(),v.end(),[](int i){
        cout << i << " ";
    });

    cout << "\n";

	return 0;
}
