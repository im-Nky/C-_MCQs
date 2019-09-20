/*
	Output:100 b/c of recursion in add
*/

#include <bits/stdc++.h>
using namespace std;

void add(int & x){
	if(x==100)
	 return ;
	x+=1;
	add(x); 
}

int main()
{
	int x=20;
	add(x);
	cout<<x<<endl;
	return 0;
}
