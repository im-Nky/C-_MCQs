#include <bits/stdc++.h>
using namespace std;

class base {
public:
	base() {cout << "base ()" <<endl;}
	base(int x) { cout<< "Base(int x)" << endl;}
	~base () { cout << "~base()" <<endl;}
};

class derived : public base {
	child():base() {cout << "child ()" <<endl;}
	child(int x): base(x) { cout<< "child(int x)" << endl;}
}
int main()
{
	child();
	child(1);
	return 0;
}
