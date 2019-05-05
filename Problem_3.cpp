#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main() 
{
	int a,x;
	double y,v,b;
	const double z = 2.5;
	
	cout << "input value of x: "; cin >> x;
	cout << "input value of y: "; cin >> y;
	
	switch(x)
	
	{
	case 1:
		cout << setprecision(2) << fixed << showpoint;
	if(y > 1 && y < 5)
	{
		v = x * y * z;
		cout << "V = " << v << setw(10) << setprecision(2);
	}
	else if(y >= 5)
	{
		v = x + (y / z);
		cout << "V = " << v << setw(10) << setprecision(2);
	}
	break;
	
	case 2:
		cout << setprecision(2) << fixed << showpoint;
	if(y <= 5)
	{
		a = (x - y) / z;
		v = abs (a);
		cout << "V = " << v << setw(10) << setprecision(2);
	}
	else if(y > 5)
	{
		b = sqrt (y + z);
		v = x - b;	
		cout << "V = " << v << setw(10) << setprecision(2);
	}
	break;
	
	default:
		v = x + y + z;
		cout << "V = " << v << setw(10) << setprecision(2);
		break;
	}

	system("pause");
	getch();
	return 0;
}
