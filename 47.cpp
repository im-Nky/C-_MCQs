#include <bits/stdc++.h>
using namespace std;

class base {
	int _x;
public:
	base ():_x{0} { }
	base (const base & rhs) {
		_x = rhs._x;
		cout << "Copy Constructors" <<endl;
	}
	base & operator = (const base & rhs) {
		_x = rhs._x;
		cout << "Assignment Operators" <<endl;
		return *this;
	}
};

int main()
{
	base b1, b2;
	base b3 = b1;	// base b3(b1);
	b2 = b1;
	return 0;
}
