#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 누적 합
	// 특정한 배열이 있을 때, 배열까지의 합을 나타내는 것입니다. 

	int list[SIZE] = { 1,2,3,4,5 };
	int sumList[SIZE+1];

	for (int i = 0; i < SIZE+1; i++)
	{
		if (i == 0)
		{
			sumList[i] = 0;
		}
		else
		{
			sumList[i] = sumList[i - 1] + list[i-1];
		}
	}

	for (const int& element : sumList)
	{
		cout << element << " ";
	}

	
#pragma endregion

	return 0;
}