#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a, b, aPrime, bPrime;
    cin >> a >> b;

    aPrime = a;
    aPrime[0] = b[0];

    bPrime = b;
    bPrime[0] = a[0];

    printf("%d %d\n",a.size(),b.size());
    cout << a+b << endl;
    cout << aPrime << " " << bPrime << endl;

    return 0;
}
