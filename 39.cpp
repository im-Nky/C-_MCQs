#include <bits/stdc++.h>
using namespace std;

class base {
public:
	base(){cout << "Constructor of base " <<endl;}
};

int main()
{
	base *t1 = (base *)malloc(sizeof(base));
	base *t2 = new base ();
	return 0;
}
