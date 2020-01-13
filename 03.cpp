/* Compilation Error as constructor are in private zone*/


#include <bits/stdc++.h>
using namespace std;

class base{
	int _a;
	base(){}
	base(int a):_a{a}{}
public:
	void print(){cout<<_a<<endl;}
};

/*ass derived:public base{
public:
	using one :: add;
	int add(int x){
		return x+1;
	}
};
*/
int main()
{
	base b(10);
	b.print();
	return 0;
}
