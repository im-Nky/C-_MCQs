#include <bits/stdc++.h>
using namespace std;

class base{
	int _a;
public:
	base(int x){cout << "Base Intializes x"<< endl;}
};

class derived:public base{
	int _b;
public:
	derived(int a,int b):_a{a},_b{b}{
		cout << "Base Intializes a and b"<< endl;
	}
};

int main()
{
	child c1;
	child c2(1,2);
	return 0;
}
