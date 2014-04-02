#include "func.h"

CoordCart sumCart(CoordCart a, CoordCart b)
{
	CoordCart result;
	result.x=a.x+b.x;
	result.y=a.y+b.y;
	return result;
}

CoordCart subCart(CoordCart a, CoordCart b)
{
	CoordCart result;
	result.x=a.x-b.x;
	result.y=a.y-b.y;
	return result;
}

CoordCart convertInCart(CoordPolar a)
{
	CoordCart result;
	result.x=a.r*cos(a.phi);
	result.y=a.r*sin(a.phi);
	return result;
}

CoordPolar convertInPolar(CoordCart a)
{
	CoordPolar result;
	result.r=sqrt(a.x*a.x+a.y*a.y);
	result.phi=atan2(a.y,a.x);
	return result;
}

CoordPolar sumPolar(CoordPolar a, CoordPolar b)
{
	CoordCart temp1;
	CoordCart temp2;
	temp1=convertInCart(a);
	temp2=convertInCart(b);
	return convertInPolar(sumCart(temp1,temp2));
}

CoordPolar subPolar(CoordPolar a, CoordPolar b)
{
	CoordCart temp1;
	CoordCart temp2;
	temp1=convertInCart(a);
	temp2=convertInCart(b);
	return convertInPolar(subCart(temp1,temp2));
}

void inCart(CoordCart *a)
{
    cout << "Enter cartesian coordinates." << endl;
    cin >> a->x >> a->y;
}

void inPolar(CoordPolar *a)
{
    cout << "Enter polar coordinates." << endl;
    cin >> a->r >> a->phi;
}

void outCart (CoordCart a)
{
    cout << a.x << " " << a.y <<endl;
}

void outPolar (CoordPolar a)
{
    cout << a.r << " " << a.phi <<endl;
}
