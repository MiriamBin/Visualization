#pragma once
#include "Macros.h"


class Node
{
public:
	Node();

	Node(sf::Vector2f pos);

	void draw(sf::RenderWindow& window) const;

private:
	sf::RectangleShape m_node;
	std::vector<Node*> m_neighbors;
	bool m_blockNode = false;
	bool m_targetNode = false;
	bool m_startNode = false;
	int  m_distance = INT_MAX;
	Node* m_pred = NULL;

};
