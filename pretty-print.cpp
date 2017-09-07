#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

        long long int temp = A;
        // cout << setw(0) << nouppercase << "0x" << hex << temp << defaultfloat << endl;
        cout << setw(0) << nouppercase << showbase << hex << temp << defaultfloat << endl;
        cout << setiosflags(ios::uppercase);

        // string underscores;
        // if (B < 10)
        //     underscores = "__________";
        // else if ( B >= 10 && B < 100 )
        //     underscores = "_________";
        // else if ( B >= 100 && B < 1000 ) 
        //     underscores = "________";
        // else if ( B >= 1000 && B < 10000 ) 
        //     underscores = "_______";

        cout.precision(2);
        if ( B > 0 )
            // cout << fixed << underscores << "+" << B << endl;
            cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << showpos << B << endl;
        else
            // cout << fixed << underscores << "-" << B << endl;
            cout << fixed << setw(15) << setprecision(2) << setfill('_') << right << noshowpos << B << endl;

        cout << setprecision(9) << scientific << noshowpos << C << endl;
    }
        return 0;

}    