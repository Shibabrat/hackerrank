#include <iostream> // for cout
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){

    int maxFour = a;
    int nums[4] = {a, b, c, d};

    for (int k = 0; k <= 2; k++){
        if ( maxFour <= nums[k+1] )
            maxFour = nums[k+1];
        else 
            continue;
        // cout << maxFour << endl;
    }
        
    return maxFour;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}



