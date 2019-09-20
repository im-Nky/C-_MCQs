/*
	Compilation Error: As constructor can't be overloaded 
	check at base class constructor
*/

#include <bits/stdc++.h>
using namespace std;

class base {
	int _a;
public:
	base(int a=10):_a{a} {}
	base(int a):_a{a} {}
	void print() {cout<<_a<<endl;}
};

int main()
{
	base b(10);
	b.print();
	return 0;
}
