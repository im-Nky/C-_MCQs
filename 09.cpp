/*
	output is 21 21


*/

#include <bits/stdc++.h>
using namespace std;

void add(int & x){ x+=1; }	// This is l-value reference
void sub(int && x){ x+=1; }	// This is r-value reference

int main()
{
	int x=20;
	add(x);
	cout<<x<<endl;
	sub(10);
	cout<<x<<endl;
	return 0;
}
