#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    std::string substring = "";
    std::unordered_map<char, std::string> freqMap;
    for(const auto& c : s) {
        if(freqMap.find(c) == freqMap.end()) {
            substring += c;
            freqMap[c] = "";
        } else {
            substring = c;
            freqMap.clear();
        }
    }

    std::cout << substring << "\n";
    return substring.length();
}

int main() {
    
    std::cout << lengthOfLongestSubstring("pwwkew") << "\n";

    return 0;
}
