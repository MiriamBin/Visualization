#include "graph.h"

Graph::Graph()
{
	createGraph(20);
}

void Graph::createGraph(int size)
{
	std::vector<Node> row;

	for (int i = 0 ; i < size ; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			row.push_back(Node(sf::Vector2f(i * 20 + 9, j* 20 +9)));
		}
		m_graph.push_back(row);
	}
}

void Graph::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < m_graph.size(); ++i)
	{
		for (int j = 0; j < m_graph[0].size(); ++j)
		{
			m_graph[i][j].draw(window);
		}
	}
}