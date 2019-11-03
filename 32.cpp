#include <bits/stdc++.h>
using namespace std;

class base {
	int _x;
public:
	base(int x):_x{x}{ }
	int getvalue() {return _x;}
};

class bingo {
	base b;
public:
	bingo(int x) {b._x=x;}
	base & getbase() {return b;}
};

int main()
{
	bingo b(10);
	cout << b.getbase().getvalue <<endl;
	return 0;
}
