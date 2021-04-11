

#include <iostream>
using namespace std;

int a, b,n,sum;

int main()
{
	cin >> a;
	n = 0;
	n = n + a;
	sum = 0;

	while (a!=0)
	{
		b=a% 10;
		sum = sum * 10 + b;
		a = a / 10;
	}
	if (sum == n)cout << "YES"; else
	{
		cout << "NO";
	}

   
}

