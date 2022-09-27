#include "graph.h"

Graph::Graph()
	:m_graphSize(20)
{
	createGraph(m_graphSize);
}

void Graph::createGraph(int size)
{

	for (int i = 0 ; i < size; ++i)
	{
		std::vector<Node> row;

		for (int j = 0; j < size; ++j)
		{
			Node node(sf::Vector2f(j * (size + 10) + 10, i * (size + 10) + 10));
			row.push_back(node);
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
			m_graph[j][i].draw(window);
		}
	}
}