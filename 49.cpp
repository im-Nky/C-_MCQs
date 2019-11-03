#include <bits/stdc++.h>
using namespace std;

class base {
	const int _x, _y;
public:
	void print() {cout << _x << " " << _y <<endl;}
};

int main()
{
	base b1;
	b1.print();
	return 0;
}
