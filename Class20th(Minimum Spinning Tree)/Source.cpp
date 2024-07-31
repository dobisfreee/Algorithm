#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define SIZE 8

class Graph
{
private:

	int cost;
	int parent[SIZE];

	class Edge
	{
	private:
		int x;
		int y;
		int distance;




	public:

		Edge(int x, int y, int distance)
		{
			this->x = x;
			this->y = y;
			this->distance = distance;
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

		bool operator < (const Edge& edge) // 연산자 오버로딩 복습하기, 값 맘대로 수정못하게 const
		{
			return this->distance < edge.distance;
		}
	};

	vector <Edge> graph;

public:

	Graph()
	{
		cost = 0;

		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = i;
		}
	}

	void Insert(int x, int y, int distance)
	{
		graph.push_back(Edge(x, y, distance));
	}

	void Kruskal()
	{
		sort(graph.begin(), graph.end());

		for (int i = 0; i < graph.size(); i++)
		{
			if (Same(graph[i].X(), graph[i].Y()) == false)
			{
				cost += graph[i].Distance();
				Union(graph[i].X(), graph[i].Y());
			}
		}

		cout << "Graph 최소 비용 : " << cost << endl;
	}

	int Find(int x)
	{
		if (x == parent[x])
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	void Union(int x, int y)
	{
		x = Find(x);
		y = Find(y);

		if (x < y)
		{
			parent[y] = x;
		}
		else
		{
			parent[x] = y;
		}
	}

	bool Same(int x, int y)
	{
		return  Find(x) == Find(y);
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

	graph.Kruskal();

#pragma endregion


	return 0;
}