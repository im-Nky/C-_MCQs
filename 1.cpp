/* With Inheriting a class, scope doesn't get inherited.
   So There will not be any overloading situation as object of class two
  will only call add of class two

	Output: 11 11
*/

#include <bits/stdc++.h>
using namespace std;

class one{
public:
	double add(double x){
		return (x+0.1);
	}
	/*char add(char a){
	 	return a;
        } */

};

class two:public one{
public:
	int add(int x){
		return x+1;
	}
};

int main()
{
	two obj;
	cout<<obj.add(10)<< " " << obj.add(10.1) <<endl;  
	return 0;
}
