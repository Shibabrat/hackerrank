#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vec;
    int size;
    double temp;

    cin >> size;

    for (int j = 0; j < size; j++){
        cin >> temp; 
        vec.push_back(temp);
    }

    sort(vec.begin(),vec.end());
    for (int j = 0; j < size; j++){
        cout << vec[j] << " ";
    }
    cout << '\n';

    return 0;


} 

