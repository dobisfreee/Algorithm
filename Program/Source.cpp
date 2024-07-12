#include <iostream>

#define SIZE 5

using namespace std;

void BubbleSort()
{
	int list[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		int insert = 0;

		cin >> insert;

		list[i] = insert;
	}

	int temp = 0;

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < SIZE - (i+1); j++)
		{
			if (list[j] > list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
			}
		}
	}

	for (const int & element : list)
	{
		cout << element << " ";
	}

}

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다. 

	BubbleSort();

	

#pragma endregion


	return 0;
}