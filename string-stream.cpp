#include <sstream>
#include <vector>
#include <iostream>
#include <stdlib.h>     /* atoi */

using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    char ch;
    vector<int> intInStr;
    int temp;
    
    // stringstream strtemp(str);
    stringstream strtemp;
    strtemp << str;
    
    // cout << strtemp.str() << endl;
    // strtemp.getline(str,6,',');
    
    while ( strtemp >> temp){
        intInStr.push_back(temp);
        strtemp >> ch;
    }
    
    return intInStr;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
