#include <bits/stdc++.h>
using namespace std;

class base{
	int _a;
public:
	base(int x) {_x=x;}
	int getvalue() { return _x;}
};

// int base :: _x;	// Error resolving point

int main()
{
	base b(10);
	cout << b.get value() <<endl;
	return 0;
}
