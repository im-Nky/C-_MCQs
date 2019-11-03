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
	base ();	// Temporary Objects
	base (1);
	return 0;
}
