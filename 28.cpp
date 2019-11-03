#include <bits/stdc++.h>
using namespace std;

class base {
	const int _x;
public:
	base(int x) {_x=x;}	// base(int x):_x{x} { }
	int getvalue() {return _x;}
};

int main()
{
	base b(10);
	cout << b.getvalue() <<endl;
	return 0;
}
