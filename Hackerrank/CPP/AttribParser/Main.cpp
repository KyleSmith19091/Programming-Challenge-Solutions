#include <iostream>
#include <vector>
using namespace std;

struct tag{
    string name;
    string attribType;
    string attribContent;
    tag* children;
};

int main(){
	cin.tie(0);

    int N, Q;
    cin >> N >> Q;
    vector<tag> tags(N);
    
    for(int i = 0; i < N; i++){
       std::string line;
       cin >> line;
        
    }

	return 0;
}
