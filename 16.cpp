/*
	Compilation Error: As _x is not member of derived class

*/

#include <bits/stdc++.h>
using namespace std;

class base {
	int _x;
public:
	base(int x):_x{x} {cout << "Base Intializes x"<< endl;}	// :_x{x}
};

class derived:public base {
	int _y;
public:
	derived(int x,int y):_x{x},_y{y} {
		cout << "Base Intializes x and y"<< endl;
	}
};

int main()
{
	derived c(1,2);
	return 0;
}
