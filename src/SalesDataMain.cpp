#include <iostream>
#include <string>
#include "SalesData.h"
using namespace std;
int main(int argc, char* argv[])
{
	//cout << "START SALESDATA CLASS TEST" << endl;
	//Sales_data item1("superkk72", 3, 12);
	//Sales_data item2("superkk72", 3, 6);
	//Sales_data item3 = add(item1, item2);
	//print(cout, item3) << endl;
	Sales_data item1, item2;
	cout << "Enter the first entry:" << endl;
	cin >> item1;
	cout << "Your entered item1 is: " << item1 << endl;
	cout << "Enter the second entry:" << endl;
	cin >> item2;
	cout << "Your entered item2 is: " << item2 << endl;
	cout << "item1 + item2 = " << item1 + item2 << endl;
	cout << "END SALESDATA CLASS TEST" << endl;
	system("pause");
	return 0;
}