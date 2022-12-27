#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main() {
    string message; string output;
    getline(cin, message);

    std::string answer = "";
        
    for(const auto& c : message) {
        bitset<7> charBits(c);
        std::cout << "Letter bits: " << charBits << "\n";
        auto currentBit = -1;

        for(int i = charBits.size() - 1; i >= 0; --i) {
            if(currentBit != charBits[i]) {
                answer += i != charBits.size() - 1 ? " " : "";
                answer += charBits[i] ? "0 0" : "00 0";
                currentBit = charBits[i];
            } else {
                answer += "0";
            }

        }
    }

    std::cout << "Answer: " << answer << "\n";
}
