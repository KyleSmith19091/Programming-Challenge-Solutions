#include <_ctype.h>
#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;

std::string constructWord(const int& length, const int& height, const std::string& word, const unordered_map<char,std::string>& letterMap) {
    std::string asciiWord;
    int rowIdx = 0;
    for(int i = 0; i < height; ++i) {
        std::string line;
        for(const auto& c : word) {
            if((char)tolower(c) >= 'a' && (char)tolower(c) <= 'z') {
                line += letterMap.at(tolower(c)).substr(rowIdx, length);
            } else {
                line += letterMap.at('?').substr(rowIdx, length);
            }        
        }
        rowIdx += length;
        line += "\n";
        asciiWord += line;
    }
    return asciiWord;
}

int main(){

    ifstream input("input.txt");

    if(input.is_open()) {
        int l; input >> l; input.ignore(); // Length of letters
        int h; input >> h; input.ignore(); // Height of letters
        string t; input >> t; input.ignore(); // Letter/word to print

        std::unordered_map<char, std::string> asciiLetterMap;

        for(char letter = 'a'; letter <= 'z'; letter++) {
            asciiLetterMap[letter] = "";
        }

        int rowIdx = 0;
        for (int i = 0; i < h; i++) {
            string row;
            getline(input, row);
            rowIdx = 0;

            for(char letter = 'a'; letter <= 'z'; letter++) {
                asciiLetterMap[letter] += row.substr(rowIdx, l);
                rowIdx += l;
            }
            asciiLetterMap['?'] += row.substr(rowIdx, l);
        }


        std::cout << constructWord(l,h,t,asciiLetterMap) << "\n";

    } else {
        std::cerr << "ERROR\n";
    } 

    std::cerr << "DONE\n";


    return 0;
}
