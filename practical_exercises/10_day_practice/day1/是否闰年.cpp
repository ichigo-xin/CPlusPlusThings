#include <iostream>

using namespace std;

int main()
{
	
	int year;
	while (true)
	{
		cout << "�������" << endl;
		cin >> year;
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			cout << "����" << endl;
		}
		else
		{
			cout << "�������� " << endl;
		}
		system("pause");
		system("cls");
	}
	

	return 0;
}