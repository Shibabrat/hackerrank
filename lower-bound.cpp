#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long N, Q, temp;
    vector<int> sortedVec;
    vector<int> queryVec;
    vector<int>::iterator low;

    // Read in the elements of the vector
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> temp;
        sortedVec.push_back(temp);
    } 

    // Read in the queries 
    cin >> Q;
    for (int j = 0; j < Q; j++){
        cin >> temp;
        queryVec.push_back(temp);
    }

    // Do the search
    for (int j = 0; j < Q; j++){
        low = lower_bound(sortedVec.begin(), sortedVec.end(), queryVec[j]);
        if ( *low == queryVec[j] )
            cout << "Yes " << ( low - sortedVec.begin() + 1 ) << endl;
        else if ( *low != queryVec[j] )
            cout << "No " << ( low - sortedVec.begin() + 1 ) << endl;
    }
    
    return 0;
}



