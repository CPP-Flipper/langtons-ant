//
// Created by Filip Persson on 2023-10-15.
//

#include "ant.h"


ant::ant(size_t startX, size_t startY, grid &g, Direction d) : x(startX), y(startY), direction(d), grd(g) {}


void ant::moveForward() {
    size_t currentX = x;
    size_t currentY = y;

    sf::Color currentCellColor = grd.getCellColor(currentX, currentY);

    if (currentCellColor == sf::Color::White) {
        turnRight();
    } else if (currentCellColor == sf::Color::Black) {
        turnLeft();
    }

    if (direction == UP) {
        y = currentY - 1;
    } else if (direction == RIGHT) {
        x = currentX + 1;
    } else if (direction == DOWN) {
        y = currentY + 1;
    } else if (direction == LEFT) {
        x = currentX - 1;
    }

    grd.toggleCellColor(currentX, currentY);
}


void ant::turnRight() {
    switch (direction) {
        case UP:
            direction = RIGHT;
            break;
        case RIGHT:
            direction = DOWN;
            break;
        case DOWN:
            direction = LEFT;
            break;
        case LEFT:
            direction = UP;
            break;
    }
}

void ant::turnLeft() {
    switch (direction) {
        case UP:
            direction = LEFT;
            break;
        case LEFT:
            direction = DOWN;
            break;
        case DOWN:
            direction = RIGHT;
            break;
        case RIGHT:
            direction = UP;
            break;
    }
}
