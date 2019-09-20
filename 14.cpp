/*
	Compile Time Error: 
*/
#include <bits/stdc++.h>
using namespace std;

class base{
	int _a;
public:
	base(){}
	base(int a):_a{a}{}
	base(const base & obj){_x=obj._x;}
	ostream& operator << (ostream& os, const base obj)
	{
		os << obj._x;
		return os;	
	}
};

int main()
{
	base b1(10);
	base b2 = b1;
	cout << b2 <<endl;
	return 0;
}
