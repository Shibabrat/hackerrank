/*
Using arrays C-style and C++ standard template library for vector
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N; // 1 <= N <= 1000
    int temp;
    scanf("%d\n", &N);

    vector<int> arr;
    // int arr[N];

    for (int k = 0; k < N; k++){
        cin >> temp;
        arr.push_back(temp);
        // scanf("%d", &temp);
        // arr[k] = temp;
    }

    for (int j = N-1; j >= 0; j--)
        printf("%d ",arr[j]);
    
    printf("\n");
    
    arr.clear();

    return 0;
}
