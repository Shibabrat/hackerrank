#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    private:
        long l, b, h;
    public:
        // constructors
        Box();
        Box(const int & length, const int & breadth, const int & height);
        Box(const Box &);

        // methods
        int getLength(){return l;};
        int getBreadth(){return b;};
        int getHeight(){return h;};

        long long CalculateVolume() const;

        // operator overload
        bool operator < (const Box &) const;
        friend ostream & operator << (ostream & out, const Box & rhs) {
            return out << rhs.l << " " << rhs.b << " " << rhs.h;
        } 

};

Box::Box() : l(0), b(0), h(0) {
    // puts("default constructor");
}

Box::Box(const int & length, const int & breadth, const int & height) : l(length), b(breadth), h(height) {
    // puts("constructor with arguments");
}


Box::Box(const Box & tempBox) {
    // puts("copy constructor");
    l = tempBox.l;
    b = tempBox.b;
    h = tempBox.h;
}

long long Box::CalculateVolume() const {
    
    long long vol = l*b*h;

    return vol;
}

bool Box::operator < ( const Box & rhs ) const {

    if ( l < rhs.l )
        return 1;
    else if ( b < rhs.b && l == rhs.l)
        return 1;
    else if ( h < rhs.h && l == rhs.l && b == rhs.b )
        return 1;
    else
        return 0;
}

void self_test(){

    long l, b, h;
    cout << "Enter length, breadth, and height " << endl;
    cin >> l >> b >> h;
    
    Box NewBox(l, b, h);
    cout << "Volume : " << NewBox.CalculateVolume() << endl;
    
    // Box temp(NewBox);
    // Box temp = NewBox;
    Box temp(10,20,19);
    cout << temp.getLength() << endl;
    cout << temp.getBreadth() << endl;
    cout << temp.getHeight() << endl;
    cout << "Volume : " << temp.CalculateVolume() << endl;
    if(NewBox<temp)
        cout<<"Lesser\n";
    else
        cout<<"Greater\n";

}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();

    // self_test();
    return 0;
}
