#include <bits/stdc++.h>
using namespace std;

class base {
	int _x;
public:	
	base (const base & rhs) { x=rhs._x; }
};

int main()
{
	base b1;
	base b2 = b1;
	return 0;
}
