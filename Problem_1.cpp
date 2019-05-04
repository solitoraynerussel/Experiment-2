#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() 

{
 string package;
 int time;
 int price;
 
 	cout << "Choose between these packages\n";
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr.\n";
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr\n";
	cout << "Package C: For P1995/mo of unlimited access is provided." <<endl;
	cout <<"\n";
 
	 cout << "Enter your chosen package: ";
	 cin >> package;
	 

 if ((package == "A") || (package == "B") || (package == "C")) 
{

if (package == "A") 
{
cout << "Number of hours used: ";
cin >> time;
if (time > 10)
{	
price = 995 + (time - 10) * 20;
cout << "Total charges is equal to: P" << price;
}
else 
{
price = 995;
cout << "Total charges is equal to: P" << price;
}
}

else if (package == "B") 
{
cout << "Number of hours used: ";
cin >> time;
if (time > 20) 
{
price = 1495 + (time - 20) * 10;
cout << "Total charges is equal to: P" << price;
} else
{
price = 1495;
cout << "Total charges is equal to: P" << price;
}

} else if (package == "C")
{
price = 1995;
cout << "Total charges is equal to: P" << price;
}
} 
else 
{
 cout << "Invalid package! Choose only A, B and C";
}

getch();
return 0;
}
