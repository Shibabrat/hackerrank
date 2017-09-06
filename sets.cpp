#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long Q;
    set<long long> setS;
    long long numQuery = 0;
    int type;
    long long num;
    set<long long>::iterator ind;

    cin >> Q; // total number of queries
    while ( numQuery < Q){
        cin >> type >> num;
        switch(type){
            case 1:
                setS.insert(num);
                break;
            case 2:
                ind = setS.find(num);
                if (ind != setS.end())
                    setS.erase(num);
                
                break;
            case 3:
                ind = setS.find(num);
                if (ind == setS.end())
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl; 

                break;    
        }
        numQuery += 1;
    }


    return 0;
}

