#include <boost/1.73.0/include/boost/algorithm/string/split.hpp>
#include <iostream>
#include <fstream>
#include <sstream>
#include <boost/algorithm/string.hpp>
using namespace std;

bool isPasswordValid(pair<int,int> p, char lp, string pass){
    if(pass[p.first-1]==lp ^ pass[p.second-1]==lp){
        return true;
    }
    return false;
}

int main(){
	cin.tie(0);

    ifstream input("input.txt");

    int numValidPasswords = 0;

    pair<int,int> policy;
    char letterPolicy;
    string password;
    
    string line;

    while(getline(input,line)){
        stringstream ss(line);
        string value;
        while(getline(ss,value,' ')){
            if(value.find("-")!=std::string::npos){
                vector<string> res;
                boost::split(res,value,boost::is_any_of("-"));
                policy.first = stoi(res[0]);
                policy.second = stoi(res[1]);
            }else if(value.find(":")!=std::string::npos){
                letterPolicy = value[0];
            }else{
                password = value;
            }
        } 
        if(isPasswordValid(policy, letterPolicy, password)) numValidPasswords++;        
    }

    cout << numValidPasswords << "\n";

	return 0;
}
