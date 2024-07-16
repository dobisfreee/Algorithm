#include <iostream>

using namespace std;

#define SIZE 5

void TwoPointer(int a, int b, int c, int d, int e)
{
	int array[SIZE] = { a,b,c,d,e };

	int count = 0;
	int sum = 0;

	int start = 0;
	int end = 0;

	int m = 5;

	while (start <= end)
	{
		if (sum >= m)
		{
			sum -= array[start++];
		}
		else if (end >= SIZE)
		{
			break;
		}
		else
		{
			sum += array[end++];
		}

		if (sum == m)
		{
			count++;
		}
	}

	cout << count;

}
int main()
{
#pragma region 투 포인터
	// 두 개의 포인터(배열의 원소를 가리키는 변수)를 활용해서 
	// 배열의 요소를 효과적으로 탐색하는 알고리즘입니다. 

	// 1. 시작점과 끝나는 지점이 첫번째 원소를 가리키도록 합니다, sum = 0

	// 2. 현재 부분합이 m 보다 작다면 end를 1 증가시킵니다.

	// 3. 현재 부분합이 m과 같다면 count를 증가시킵니다.

	// 4. 현재 부분합이 m보다 크거나 같다면 start를 1 증가시킵니다.

	// 5. 모든 값을 확인할 때까지 위 과정을 반복

	TwoPointer(1, 2, 5, 2, 5);

#pragma endregion

	return 0;
}