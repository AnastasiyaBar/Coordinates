#include "func.h"

int main()
{
	CoordCart *a;
	a=new CoordCart;
	inCart(a);
	CoordCart *b;
	b=new CoordCart;
	inCart(b);
	CoordPolar *f;
	f=new CoordPolar;
	inPolar(f);
	CoordPolar *h;
	h=new CoordPolar;
	inPolar(h);
	cout << endl;
	CoordCart res1=sumCart(*a,*b);
	CoordCart res2=subCart(*a,*b);
	CoordPolar res3=sumPolar(*f,*h);
	CoordPolar res4=subPolar(*f,*h);
	cout << "Sum of the two cartesian coordinates:" << endl;
	outCart(res1);
	cout << "Difference of the two cartesian coordinates:" << endl;
	outCart(res2);
	cout << "Sum of the two polar coordinates:" << endl;
	outPolar(res3);
	cout << "Difference of the two polar coordinates:" << endl;
	outPolar(res4);
	return 0;
}
