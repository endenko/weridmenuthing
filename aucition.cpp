#include<iostream>
using namespace std;

bool SNT(long n) 
{
	if (n < 2) 
	{
		return false;
	}
	for (int i = 2; i * i <= n; i++) 
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool Doixung(long m) 
{
	int temp = m;
	int soDao = 0;
	while (temp != 0) 
	{
		soDao = soDao * 10 + temp % 10;
		temp /= 10;
	}
	return (m == soDao);
}

int main()
{
	long a, b, i, s;
	cin >> a;cin >> b;
	s = 0;
	if (10000 <= a && a <= b && b < 100000)
	{
		for (i = a; i <= b; i++)
		{
			if (SNT(i) && Doixung(i))
			{
				s++;
			}
		}
		cout<< s << endl;
	}
	else
	{
		return -1; 
	}

	return 0;
}
