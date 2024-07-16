#include <iostream>

#include <math.h>

using namespace std;

int list[101];

bool IsPrime(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;

}

void Sieve(int n)
{
	for (int i = 0; i < n; i++)
	{
		list[i] = i;
	}

	for (int a = 2; a <= sqrt(n); a++)
	{
		if (list[a] == 0)
		{
			continue;
		}

		for (int b = a * 2; b <= n; b += a)
		{
			list[b] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (list[i] != 0)
		{
			cout << list[i] << " ";
		}
	}
	

}

int main()
{
	Sieve(49);

	return 0;
}

