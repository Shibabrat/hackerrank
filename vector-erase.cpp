#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long N, temp, query1, query2, query3;

    // cout << "Enter the size of the vector: " << endl;
    cin >> N;

    vector<int> vecIn;
    for ( int i = 0; i < N; i++ ){
        cin >> temp;
        vecIn.push_back(temp);
    }

    cin >> query1;
    cin >> query2 >> query3;

    vecIn.erase(vecIn.begin() + query1 - 1);
    vecIn.erase(vecIn.begin() + query2 - 1, vecIn.begin() + query3 - 1);

    cout << vecIn.size() << '\n';
    for (auto i : vecIn)
        cout << i << " ";
    cout << '\n';

    return 0;
}


