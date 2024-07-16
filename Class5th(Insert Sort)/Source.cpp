#include <iostream>

using namespace std;
#define SIZE 5

void InsertSort(int a, int b, int c, int d, int e)
{
	int list[SIZE] = { a,b,c,d,e };


	int key = 0;
	int j = 0;

	for (int i = 1; i < SIZE; i++)
	{
		key = list[i];

		for (j = i - 1; j >= 0 && list[j] > key; j--) // list[j]가 key 보다 작으면 바로 반복을 종료 
		{
			list[j + 1] = list[j];
		}

		list[j + 1] = key;
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}
}

int main()
{
#pragma region 삽입 정렬
	// 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여 
	// 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘입니다. 

	InsertSort(5, 8, 6, 2, 4);
#pragma endregion

	return 0;
}