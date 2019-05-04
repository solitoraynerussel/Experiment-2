#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double billPreviousMonth, billRecentMonth, totalWaterBill, gallon;
	
	cout << "Enter the amount of your bill on the previous month: ";
	cin >> billPreviousMonth;
	cout << "Enter the amount of your bill on the recent month: ";
	cin >> billRecentMonth;
	cout << "Enter how many gallons used: ";
	cin >> gallon;
	
	if(billPreviousMonth > 0)
	{
		totalWaterBill = billPreviousMonth + billRecentMonth + 35 + (1.10*gallon) + 20;
		cout << "Your total water bill with late charges is : P" << totalWaterBill;
	}
	else if(billPreviousMonth == 0)
	{
		totalWaterBill = billRecentMonth + 35 + (1.10*gallon);
		cout << "Your total water bill is: P" << totalWaterBill;
	}
	
	getch();
	return 0;
}
