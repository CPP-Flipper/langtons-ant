//
// Created by Filip Persson on 2023-10-15.
//

#ifndef PROJEKT_METODIK_ANT_H
#define PROJEKT_METODIK_ANT_H
#include <cstdlib>
#include "grid.h"
enum Direction { UP, RIGHT, DOWN, LEFT };

class ant {
private:
    size_t x, y;
    Direction direction;
    grid& grd;
public:
    /**
     * @brief Constructor for the Ant class, initializing its position, direction, and grid reference.
     *
     * This constructor creates an ant with the specified starting coordinates, direction, and a reference to the grid it operates on.
     *
     * @param startX The X-coordinate of the ant's starting position.
     * @param startY The Y-coordinate of the ant's starting position.
     * @param g A reference to the grid on which the ant operates.
     * @param d The initial direction in which the ant is facing.
     */
    ant(size_t startX, size_t startY, grid &g, Direction d);

    /**
     * @brief Move the ant forward based on its current direction and the color of the cell it's on.
     * If the current cell is white, the ant turns right. If the current cell is black, it turns left.
     * Then, the ant moves one step forward in the direction it is facing and toggles the color of the cell.
     */
    void moveForward();

    /**
     * @brief Turn the ant 90 degrees to the right.
     * Updates the ant's direction based on its current direction, rotating it to the right.
     */
    void turnRight();

    /**
     * @brief Turn the ant 90 degrees to the left.
     * Updates the ant's direction based on its current direction, rotating it to the left.
     */
    void turnLeft();
};


#endif //PROJEKT_METODIK_ANT_H
