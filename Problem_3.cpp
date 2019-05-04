#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main() 
{
	double x, y;
	double z = 2.5;
	
	cout << "input value of x: "; cin >> x;
	cout << "input value of y: "; cin >> y;
	
	if (x == 1 && y > 1 && y < 5)
		cout << "V = " << x * y * z << endl;
		
	else if (x == 1 && y >= 5)
		cout << "V = " << x + (y / z) << endl;
		
	else if (x == 2 && y <= 5)
		cout << "V = " << abs((x - y) / z) << endl;
		
	else if (x == 2 && y > 5)
		cout << "V = " << x - sqrt(y + z) << endl;
		
	else
		cout << "V = " << x + y + z << endl;

	system("pause");
	getch();
	return 0;
}
