#include "node.h"

Node::Node()
{
}

Node::Node(sf::Vector2f pos)
{
	m_node.setFillColor(sf::Color::Blue);
	m_node.setSize(sf::Vector2f(20, 20));
	m_node.setPosition(pos);
}

void Node::draw(sf::RenderWindow& window) const
{
	window.draw(m_node);
}