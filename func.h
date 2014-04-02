#include <iostream>
#include <math.h>
using namespace std;

struct CoordCart
{
	double x;
	double y;
};
struct CoordPolar
{
	double r;
	double phi;
};

CoordCart sumCart(CoordCart a, CoordCart b);
CoordCart subCart(CoordCart a, CoordCart b);
CoordCart convertInCart(CoordPolar a);
CoordPolar convertInPolar(CoordCart a);
CoordPolar sumPolar(CoordPolar a, CoordPolar b);
CoordPolar subPolar(CoordPolar a, CoordPolar b);
void inCart(CoordCart *a);
void inPolar(CoordPolar *a);
void outCart (CoordCart a);
void outPolar (CoordPolar a);
