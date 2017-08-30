#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private: 
        int age_c, standard_c;
        string first_name_c, last_name_c;
    public:
        void set_age(int age){
            age_c = age;
        }
        int get_age(){
            return age_c;
        }
        void set_standard(int standard){
            standard_c = standard;
        }
        int get_standard(){
            return standard_c;
        }
        void set_first_name(string first_name){
            first_name_c = first_name;
        }
        string get_first_name(){
            return first_name_c;
        }
        void set_last_name(string last_name){
            last_name_c = last_name;
        }
        string get_last_name(){
            return last_name_c;
        }
        string to_string(){
            stringstream ss;
            string s;

            ss << age_c << "," << first_name_c << "," << last_name_c << "," << standard_c;
            ss >> s;

            return s;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string() << endl;
    
    return 0;
}
