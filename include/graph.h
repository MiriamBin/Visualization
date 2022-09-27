#pragma once
#include <vector>
#include "node.h"

class Graph
{
public:
	Graph();
	void createGraph(int size);
	void draw(sf::RenderWindow& window);

private:
	std::vector<std::vector<Node>> m_graph;
	int m_graphSize;
};


