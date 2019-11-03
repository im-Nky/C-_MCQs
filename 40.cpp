#include <bits/stdc++.h>
using namespace std;

class base1 {
public:
	base1() {cout << "Constructor of base1 " <<endl;}
}b;		// b is global variable for base1 class

class base2 {
public:
	base2() { cout << "Constructor of base2 " <<endl;}

}
int main()
{
	cout << "Main Called " <<endl;
	base2 b2;
	return 0;
}
