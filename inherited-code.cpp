#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <exception>
using namespace std;

class BadLengthException : public exception {
    int _n;
    BadLengthException(){};
    public:
        BadLengthException( const int & n ) throw() : _n(n) {}
        virtual const char * what () const throw(){ 
            // cout << _n << endl;
            char * c = new char[2];
            strcpy(c, to_string(_n).c_str());
            return c;
        }
};

// Restricted code

bool checkUsername(string username) {
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
			isValid = false;
		}
	}
	return isValid;
}

int main() {
	int T; cin >> T;
	while(T--) {
		string username;
		cin >> username;
		try {
			bool isValid = checkUsername(username);
			if(isValid) {
				cout << "Valid" << '\n';
			} else {
				cout << "Invalid" << '\n';
			}
		} catch (BadLengthException e) {
			cout << "Too short: " << e.what() << '\n';
		}
	}
	return 0;
}