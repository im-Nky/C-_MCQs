#include <bits/stdc++.h>
using namespace std;

class base {
	int x;
public:
	base(int x){x=x}
	int getvalue() {return x;}
};

int main()
{
	base b(10);
	cout << b.getbase()<<endl;
	return 0;
}
