#include <bits/stdc++.h>
using namespace std;

class base {
public:
	base() {cout << "base ()" <<endl;}
	base(int x) { cout<< "Base(int x)" << endl;}
	~base () { cout << "~base()" <<endl;}
};

int main()
{
	base b1 = base();	// permanent objects
	base b2 = base(1);
	return 0;
}
