/* Output: 11 10.6 */

#include <bits/stdc++.h>
using namespace std;

class one{
public:
	double add(double x){
		return x+0.1;
	}
	char add(char a){
	 	return a;
        }

};

class two:public one{
public:
	using one :: add; 	// This statement will provide access add function of class one
	int add(int x){		// Hence here a overloading situation of add will take place
		return x+1;
	}
};

int main()
{
	two obj;
	cout<<obj.add(10)<< " " << obj.add(10.5) <<endl;  
	return 0;
}
