/*
	For Copy Constructor base class reference is must
*/


#include <bits/stdc++.h>
using namespace std;

class base{
	int _x;
public:
	base () { }	// default constructor	
	base (int x):_x{x} {}	// Parameterized Constructor
	base (const base & obj) { _x = obj._x;}	// Copy Constructor
	int getvalue(){ return _x; }
};

int main()
{
	base b1(10);
	base b2=b1;
	cout<< b2.getvalue() <<endl;
	return 0;
}
