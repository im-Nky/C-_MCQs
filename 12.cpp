/*
	Output: 21
*/

#include <bits/stdc++.h>
using namespace std;

void sub(int x){ x-=1; }
void add(int& x){ x+=1; sub(x); } 	// Sub will not work as it's calling through references

int main()
{
	int x=20;
	add(x);
	cout<<x<<endl;
	return 0;
}
