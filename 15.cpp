#include <bits/stdc++.h>
using namespace std;

class base{
        int _x;
public:
        base(){}
        base(int x):_x{x}{}
	base(base *this, int x) : this->_x{x} {this->x;}
        base(const base& obj){_x = obj._x;}
        friend ostream& operator << (ostream& os, const base obj);
};

ostream& operator << (ostream& os, const base obj) {
         os << obj._x;
         return os;
}


int main()
{
        //base b1(10);
	base (&b1,10);
        base b2 = b1;
        cout << b2 <<endl;
	operator << (cout);
        return 0;
}

