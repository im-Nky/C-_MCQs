#include <bits/stdc++.h>
using namespace std;

class base{
	int _a;
public:
	base(){}
	base(int a=0):_a{a}{}	// Error as it's also default constructor because a=0;
	void print(){cout<<_a<<endl;}
};

int main()
{
	base b1(10);
	base b2;
	b2=b1;
	b2.print();
	return 0;
}
