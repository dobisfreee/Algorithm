#include <iostream>

using namespace std;

void TheGreatestCommonFactor(int a,int b)
{
	int answer= 1;

	for (int i = 2; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			answer *= i;

			a /= i;
			b /= i;

			i--;
		}
	}

	cout << "최대 공약수 : " << answer;
}

int main()
{
	TheGreatestCommonFactor(15, 30);

	return 0;
}