#include "window.h"
#include "graph.h"

Window::Window()
    : m_window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Visualization", sf::Style::Close | sf::Style::Titlebar)
{

}

bool Window::isOpen() const
{
    return m_window.isOpen();
}

void Window::draw()
{
    m_grph.draw(m_window);
    m_window.display();
}

sf::RenderWindow* Window::getWindow()
{
    return &m_window;
}