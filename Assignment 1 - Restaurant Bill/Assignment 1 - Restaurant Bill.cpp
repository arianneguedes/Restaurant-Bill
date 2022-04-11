// This is a program to to split a restaurant bill evenly between a given number of people

#include <iostream>
using namespace std;

int main()
{
	double bill, billAfterTax, billAfterTip, billPerPerson;
	int tax, tip, peopleNumber;
	cout << "How much is the bill? ";
	cin >> bill;
	cout << "How much is the tax (%)? ";
	cin >> tax;
	cout << "How much is the tip (%)? ";
	cin >> tip;
	cout << "How many people are paying? ";
	cin >> peopleNumber;
	billAfterTax = bill + (bill * tax / 100);
	billAfterTip = billAfterTax + (billAfterTax * tip / 100);
	billPerPerson = billAfterTip / peopleNumber;
	cout << "\nBill before tax: " << bill;
	cout << "\nBill after tax: " << (billAfterTax * 100 + 0.5) / 100.0;
	cout << "\nBill after tip: " << (billAfterTip * 100 + 0.5) / 100.0;
	cout << "\nBill per person: " << (billPerPerson * 100 + 0.5) / 100.0;
}