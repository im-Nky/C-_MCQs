#include <bits/stdc++.h>
using namespace std;

class base {
	int _a;
public:
	// base() {}
	base(int x) {_x=x; cout<< "Base Intializes to x"<< endl;}
};

class derived: public base {
	int _y;
public:
	//derived():base()
	child (int x, int y): base (x){ _y=y; cout<<"Child Intializes x & y"; }
};


int main()
{
	child c1(1,2);
	child c2;
	c2 = c1;
	return 0;
}
