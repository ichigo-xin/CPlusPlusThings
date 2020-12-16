#include <iostream>

using namespace std;

int main()
{
	
	int year;
	while (true)
	{
		cout << "输入年份" << endl;
		cin >> year;
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			cout << "闰年" << endl;
		}
		else
		{
			cout << "不是闰年 " << endl;
		}
		system("pause");
		system("cls");
	}
	

	return 0;
}