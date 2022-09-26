#pragma once
#include "Macros.h"
#include "graph.h"

class Window
{
public:
    Window();
    bool isOpen() const;
    void draw();
    sf::RenderWindow* getWindow();

private:
    sf::RenderWindow m_window;
    sf::RectangleShape m_background;
    Graph m_grph;

};;