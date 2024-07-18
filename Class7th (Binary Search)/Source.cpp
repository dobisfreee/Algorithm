#include <iostream>

using namespace std;

#define SIZE 10

void BinarySearch(int list[], int key) // 시간복잡도 O(logn)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		int middle = (left + right) / 2;

		if (list[middle] == key)
		{
			cout << "Key Found in the " << middle << "th Position" << endl;
			return;
		}
		else if (list[middle] < key)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	cout << "Not Found" << endl;
}
int main()
{
#pragma region 이진 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 
	// 좁혀나가는 방식으로 동작하는 탐색 알고리즘입니다. 

	int list[SIZE] = { 5,6,11,13,27,55,66,99 };

	BinarySearch(list, 55);
#pragma endregion

	return 0;
}