#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>

#include <string>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long Q;
    long long numQuery = 0;
    string name, query;
    
    map<string,long> mapM;
    map<string,long>::iterator itr;
    int type;
    bool finished  = false;

    string command;
    getline(cin, command);
    Q = stoi(command);
    while ( numQuery < Q ){

        long marks = 0;
        string command;
        stringstream test;
        vector<int> ints;
        vector<string> strs;

        string strval;
        int intval;
        getline(cin, command); 
        test.str(command);

        while( !finished ) {
            if(test.eof())
                break;

            if(test >> strval) {
                strs.push_back(strval);
            }
            else if(test >> intval) {
                ints.push_back(intval);
            }
            // else {
            //     cout << "error!" << endl;
            // }
        }

        finished = true;
        type = stoi(strs[0]);
        name = strs[1];
        if (type == 1)
            marks = stoi(strs[2]);
        else if (type == 3)
            marks = 0;

        // cout << type << " " << name << endl;
        switch(type){
            case 1:
                itr = mapM.find(name);
                if ( itr == mapM.end() ) // name doesn't exist
                    mapM.insert(make_pair(name,marks)); 
                else {
                    int temp = itr->second;
                    marks = marks + temp;
                    // cout << marks << endl;
                    mapM[name] = marks; 
                }
                break;
            case 2:
                mapM.erase(name);
                break;
            case 3:
                itr = mapM.find(name);
                if ( itr == mapM.end() )
                    cout << marks << endl;
                if ( itr != mapM.end() )
                    cout << itr->second << endl; 
                break;    
            default:
                cout << "Invalid type ID \n";
                break;
        }

        finished = false;
        numQuery += 1;
    }
    
    return 0;
}