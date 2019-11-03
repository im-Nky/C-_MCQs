// Virtual Function Demonstration

#include <bits/stdc++.h>
using namespace std;

class base {
public:
	virtual void my() { cout << "Base My Function" << endl;}
};

class derived: public base {
public:
	void my() { cout << "Derived My Function" << endl;}
};

void my(Base *b) {
	b->my();
	delete b;
}

int main()
{
	my (new derived);
	my (new base);
	return 0;
}
