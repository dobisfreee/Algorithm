#include <iostream>

using namespace std;

#define SIZE 7
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

	int list[SIZE] = { 10,4,3,20,8,6,22 };

	int gap = 0; 

	if (gap % 2 != 0)
	{
		gap = SIZE / 2; // 3
	}
	else
	{
		gap = (SIZE / 2) + 1;
	}

	int key = list[gap]; // 20

	for (int i = 0; i < gap; i++)
	{

	}


#pragma endregion

	return 0;
}