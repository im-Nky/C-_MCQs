/*
	Compile time Error

*/

#include <bits/stdc++.h>
using namespace std;

void add (int & x){ x+=1; }

int main()
{
	int x = 20;
	add(x);
	cout<<x<<endl;
	add(10);	// Calling l-value with r-value
	cout<<x<<endl;
	return 0;
}
