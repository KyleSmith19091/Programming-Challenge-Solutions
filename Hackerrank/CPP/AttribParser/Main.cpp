#include <iostream>
#include <unordered_map>
#include <queue>
#include <sstream>
using namespace std;

int N, Q;

typedef struct TagNode {
    string name;
    std::unordered_map<std::string,std::string> attribs;
} TagNode;


typedef struct TagAttribute {
    std::string key;
    std::string value;
} TagAttribute;

int main() {
    cin >> N >> Q;
    string line;
    getline(std::cin, line);
    
    for(int i = 0; i < N-1; ++i) {
        TagNode* tagNode = new TagNode();
        getline(std::cin, line);

        if(line.substr(0,2) != "</") { // Start Tag
            tagNode->name = line.substr(1,line.find_first_of(" ")-1);
        } else { // End Tag
            tagNode->name = line.substr(2,line.find_first_of(">")-2);
        }

        

    }

}
