#include <iostream>

using namespace std;

#define SIZE 11

int main()
{
#pragma region 쉘 정렬(3중 for문)
	// 먼 거리의 요소들을 먼저 정렬하여 배열을 부분적으로
	// 정렬한 후, 점진적으로 더 작은 간격을 사용하는 정렬 알고리즘입니다. 

	// int gap = 배열의 크기 / 2 , 짝수면 + 1 gap은 인덱스 사이의 차이 

	// int key = gap의 인덱스 

	// key 와 0번째 인덱스 비교, key값이 더 작으면 앞에 삽입

	// 0 += 1 , gap =+1 번째 인덱스 비교 

	// gap만큼 반복 

	// 1회차 끝났으면 gap = gap / 2 를 해준다 

	int list[SIZE] = { 10,8,6,20,4,3,22,1,0,15,16 };

	int gap = 0;

	int j = 0;
	int key = 0;

	for (gap = SIZE / 2; gap > 0; gap /= 2)
	{
		if (gap % 2 == 0)
		{
			gap++;
		}

		for (int i = gap; i < SIZE; i++)
		{
			key = list[i];

			for (j = i; j >= gap && list[j - gap] > key; j -= gap)
			{
				list[j] = list[j - gap];
			}

			list[j] = key;
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}