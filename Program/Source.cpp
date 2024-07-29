#include <iostream>

#include <math.h>

using namespace std;

#define SIZE 7

class Graph
{
private:
	int parent[SIZE];

public:
	Graph()
	{
		for (int i = 1; i < SIZE; i++)
		{	
			parent[i] = i;
		}
	}

	int Find(int x) 
		// 부모를 찾는 함수, 배열의 인덱스와 값이 같다면 루트 노드 발견
		// 부모는 항상 작은 값 
	{
		if (parent[x] == x)
		{
			return x;
		}
		else
		{
			Find(x - 1);
		}
	}

	void Union(int x, int y) // x : 1 y : 2 를 넣었을 때, 1이 부모 2 가 자식이므로 
		// parent[2]에 부모의 값 1을 넣어준다 그럼 합쳐진 것
	{
		parent[max(x, y)] = parent[min(x, y)]; 
		// parent[2]      =     1
	}

	bool Same(int x, int y) // 부모가 같으면 true를 다르면 false
	{

	}
};

int main()
{
#pragma region 유니온 파인드
	// 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어 있는지 확인하는
	// 알고리즘입니다.

	// 유니온 파인드의 시간 복잡도
	// O(MlogN) : M은 연산의 개수, N은 노드의 개수
	// M이 N²에 가까울 때는 O(N²logN)이 됩니다. 
#pragma endregion



	return 0;
}