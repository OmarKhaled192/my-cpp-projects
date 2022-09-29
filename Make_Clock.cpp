#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
	int h, m, s, a, err;
	err = a = 0;
	while (err == 0)
	{
		cout << "Enter Hour: ";
		cin >> h;

		cout << "Enter Minute: ";
		cin >> m;

		cout << "Enter Seconds: ";
		cin >> s;

		if (h < 24 && m < 60 && s < 60)
			err++;			//when user gave me right time
		else
			system("cls");
	}
	while (a == 0)
	{
		system("cls");
		cout << h << ":" << m << ":" << s << endl;
		Sleep(1000);
		s++;
		
		if (s > 59)
		{
			s = 0;
			m++;
		}
		
		if (m > 59)
		{
			m = 0;
			h++;
		}

		if (h > 24)
		{
			h = 0;
		}
	}
	return 0;
}
