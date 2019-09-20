/*
	Output: 10 0

*/

#include <bits/stdc++.h>
using namespace std;

class base{
	int _a,_b;
public:
	base(): base(0,0) {}
	base(int a): base(a,0) {}	//Constructor Delegation
	base(int a,int b): _a{a},_b{b} {}
	void print() {cout<<_a<<" "<<_b<<endl;}
};

int main()
{
	base b(10);
	b.print();
	return 0;
}
