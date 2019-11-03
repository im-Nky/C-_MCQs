#include <bits/stdc++.h>
using namespace std;

class base {
public:
	explicit base(int x): x{x} { }
	int getvalue () { return x; }
};

int main()
{
	base b =10;
	base b = a;
	cout << a.getvalue () << " " <<b.getvalue <<endl;
	return 0;
}
