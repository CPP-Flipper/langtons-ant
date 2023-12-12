//
// Created by Filip Persson on 2023-10-22.
//

#include "window.h"


window::window(grid& g) : myGrid(g), sfWindow(sf::VideoMode(g.getWidth() * 10, g.getHeight() * 10), "Myra") {
}
void window::addAnt(int x, int y) {
    ant newAnt(x, y, myGrid, static_cast<Direction>(rand() % 4));
    ants.push_back(newAnt);
}
void window::run() {
    while (sfWindow.isOpen()) {
        sf::Event event;
        while (sfWindow.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                sfWindow.close();
            }
        }

        for (ant& ant : ants) {
            ant.moveForward();
        }

        sfWindow.clear();
        myGrid.drawGrid(sfWindow);
        sfWindow.display();
    }
}

