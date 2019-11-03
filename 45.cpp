#include <bits/stdc++.h>
using namespace std;

class base {
	int _x, _y;
public:
	base() { }
	base(int x, int y) {
		base b;
		b._x=x;
		b._y=y;	
		b.print();
		*this = b;
	}
	void print() { cout << _x << " " << _y <<endl; }
};

int main()
{
	base b(10,20);
	b.print();
	return 0;
}
