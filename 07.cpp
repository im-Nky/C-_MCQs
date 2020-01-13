/*
	Output: 20 19

*/

#include <bits/stdc++.h>
using namespace std;

void add(int x){ x+=1; }
void sub(int &x){ x-=1; }

int main()
{
	int x=20;
	add(x);
	cout<<x<<endl;
	sub(x);
	cout<<x<<endl;
	return 0;
}
