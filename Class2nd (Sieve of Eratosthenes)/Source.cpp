// Class2nd (Sieve of Eratosthenes).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그#include <iostream>

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
	for (int i = 0; i <= n; i++) 
	{
		list[i] = i;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (list[i] == 0)
		{
			continue;
		}

		for (int j = i * 2; j <= n; j += i)
		{
			list[j] = 0;
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

