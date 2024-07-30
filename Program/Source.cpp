#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 8
class Graph
{
private:
	class Edge
	{
	private:
		int x;
		int y;
		int distance;

		int parent[SIZE];

	public:

		Edge(int x, int y, int distance) 
		{
			this->x = x;
			this->y = y;
			this->distance = distance;

			for (int i = 1; i < SIZE; i++)
			{
				parent[i] = i;
			}
		}

		int& X()
		{
			return x;
		}

		int& Y()
		{
			return y;
		}

		int& Distance()
		{
			return distance;
		}
	};

	vector <Edge> graph;

public:
	Graph()
	{
		
	}

	void Insert(int x, int y, int distance)
	{
		graph.push_back(Edge(x,y,distance));
	}

	void Kruskal() // cf) end는 순방향, c(onverse)end는 역방향 
	{
		sort(graph.begin(), graph.end());

		int sum = 0;

		for (int i = 0; i < graph.size(); i++)
		{
			sum += graph[i].Distance();
		}
	}
};

int main()
{
#pragma region 신장 트리
	// 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는
	// 부분 그래프로, 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다. 

	// 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개입니다. 

	// 최소 비용 신장 트리
	// 그래프의 간선들의 가중치 합이 최소인 신장 트리 

	// 거리가 작은 순으로 vertex를 서로 연결

	Graph graph;

	graph.Insert(1, 7, 10);
	graph.Insert(1, 4, 28);
	graph.Insert(1, 2, 66);
	graph.Insert(1, 5, 19);

	graph.Insert(2, 4, 25);
	graph.Insert(2, 5, 60);

	graph.Insert(3, 5, 21);
	graph.Insert(3, 6, 35);

	graph.Insert(4, 7, 15);
	graph.Insert(5, 6, 40);

#pragma endregion


	return 0;
}