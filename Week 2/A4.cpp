#include <iostream>

using namespace std;

int t[13];

void Thang()
{
	t[0] = 0;
	t[1] = 31;
	t[2] = 28 + t[1];
	t[3] = 31 + t[2];
	t[4] = 30 + t[3];
	t[5] = 31 + t[4];
	t[6] = 30 + t[5];
	t[7] = 31 + t[6];
	t[8] = 31 + t[7];
	t[9] = 30 + t[8];
	t[10] = 31 + t[9];
	t[11] = 30 + t[10];
	t[12] = 31 + t[11];
}

bool NamNhuan(int yy)
{
	if (yy%4 == 0 && yy%100 != 0 || yy%400 == 0)
		return true;
	else 
		return false; 
}

void Ngay(int ngay)
{
	Thang();
	int y = ngay/(365*3 + 366)*4 + (ngay%(365*3 + 366))/365;
	if ((ngay%(365*3+366))%365 != 0) y++;
	int d = ngay - (y - 1)*365 - (y - 1)/4;
	if (NamNhuan(y) == true) 
		for (int i = 2;i <= 12;i++) 
			t[i]++;
	int m;
	for (int i = 1;i <= 12;i++)
	 	if (t[i] >= d) 
	 	{
	 	m = i;
	 	break;
	 	}
	d = d - t[m - 1];
	if (d < 10) 
		cout << "0" << d << "-";
	else 
		cout << d << "-";
	if (m < 10) 
		cout << "0" << m << "-";
	else 
		cout << m << "-";
	cout << y << endl;
}

int main()
{
	Thang();
	string s;
	cin >> s;
	int dd,mm,yyyy;
	dd = (s[0] - 48)*10 + s[1] - 48;
	mm = (s[3] - 48)*10 + s[4] - 48;
	yyyy = (s[6] - 48)*1000 + (s[7] - 48)*100 + (s[8] - 48)*10 + s[9] - 48;
	int d = dd + t[mm - 1] + (yyyy - 1)*365 + (yyyy - 1)/4;
	int k;
	while (true)
	{
		cin >> k;
		if (k == 0) 
			break;
		Ngay(d + k);
	}
	
	return 0;
}
