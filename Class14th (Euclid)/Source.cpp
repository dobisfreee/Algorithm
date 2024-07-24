#include <iostream>

#include <math.h>

using namespace std;

void TheGreatestCommonFactor(int a, int b)
{
	int answer = 0;

	for (int i = 1; i <= min(a, b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			answer = i;
		}
	}

	cout << "최대 공약수 : " << answer;
}

int Euclid(int x, int y)
{
	int a = max(x, y);
	int b = min(x, y);

	if (a % b == 0) // 재귀 루프 탈출하는 조건
	{
		return b;
	}
	else
	{
		Euclid(b, a % b);
	}
}

int Euclid1(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		Euclid(y, x % y);
	}
}

int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로, 
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다. 
#pragma endregion

	// TheGreatestCommonFactor(15, 30);

	int x = 24;
	int y = 18;

	cout << "최대 공약수는 : " << Euclid(x, y);

	return 0;
}