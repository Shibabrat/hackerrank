#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){

    int n;
    cin >> n;

    // your code goes here
    string numInEnglish[9] = {"one","two","three","four",\
        "five","six","seven","eight","nine"};
    string num;

    for (int i = 0; i < 9; ++i){
        if (n == i+1){
           cout << numInEnglish[n-1] << endl;
        }
    }
    if (n > 9)
        cout << "Greater than 9" << endl;

    return 0;
    
}



