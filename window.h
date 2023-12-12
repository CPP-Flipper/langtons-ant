//
// Created by Filip Persson on 2023-10-22.
//

#ifndef PROJEKTSFML_WINDOW_H
#define PROJEKTSFML_WINDOW_H
#include "ant.h"

class window {
private:
    sf::RenderWindow sfWindow;
    grid& myGrid;
    std::vector<ant> ants;
public:
    /**
     * @brief Constructor for the Window class.
     *
     * Creates a window with specified dimensions and a title. Also limits the frame rate.
     *
     * @param g A reference to a Grid that the window will use.
     */
    window(grid& g);

    /**
     * @brief Start the main loop for the window and update ants and the grid.
     *
     * This function runs the main loop for the window. It updates the positions of ants and draws the grid
     * with the ants' new states in each iteration.
     */
    void run();


    /**
     * @brief Add an ant to the window with specified starting coordinates.
     *
     * Creates a new ant and adds it to the list of ants that the window manages.
     *
     * @param x The X-coordinate for the ant's starting position.
     * @param y The Y-coordinate for the ant's starting position.
     */
    void addAnt(int x, int y);
};


#endif //PROJEKTSFML_WINDOW_H
