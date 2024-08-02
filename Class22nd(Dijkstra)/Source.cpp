#include <iostream>

#define SIZE 6
#define INF 1000000

using namespace std;

class Graph
{
private:

	int weight[SIZE][SIZE] =
	{
		{0, 2, 5, 1, INF, INF},
		{2, 0, 3, 2, INF, INF},
		{5, 3, 0, 3, 1, 5},
		{1, 2, 3, 0, 1, INF},
		{INF, INF, 1, 1, 0, 2},
		{INF, INF, 5, INF, 2, 0}
	};

	bool visited[SIZE]; // 방문 체크 

	int distance[SIZE]; // 0과 다른 번호들 사이의 최소 거리

public:

	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	int FInd()
	{
		int min = INF;
		int position = 0;

		for (int i = 0; i < SIZE; i++)
		{
			if (distance[i] < min && visited[i] == false)
			{
				min = distance[i];
				position = i;
			}
		}

		return position;
	}

	void Dijkstra(int start)  // 핵심적인 작동 구현은 여기서 (수정 필요)
	{
		visited[start] = true;
	}

	void getMinDistanceNode()   // 최소 거리 구하기 로직만 구현 (수정 필요) 
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = true;

			for (int j = 0; j < SIZE; j++)
			{
				if (i >= 1 && weight[i][j] != INF && weight[i][j] + distance[j] < distance[i])
				{
					distance[i] = weight[i][j] + distance[j];
				}
				else if (i == 0)
				{
					distance[j] = weight[i][j];
				}

			}
		}
	}

	void Show()
	{
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout << weight[i][j] << " ";
			}
			cout << endl;
		}
	}

	void ShowDistance()
	{
		for (const int& element : distance)
		{
			cout << element << " ";
		}
	}
};

int main()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의 최소 거리를 구해주는 알고리즘입니다. 

	// 1. distance 배열에 weight[시작점 노드]의 값들로 초기화합니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리합니다.
	// 단, 이미 방문한 노드는 제외합니다. 

	// 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열 갱신합니다. 
	// 단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번~4번을 반복합니다.

	// 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를
	// 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다. 

	Graph graph;

	graph.Dijkstra(0);
	graph.getMinDistanceNode();
	graph.ShowDistance();


#pragma endregion



	return 0;
}