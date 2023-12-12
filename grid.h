//
// Created by Filip Persson on 2023-10-15.
//

#ifndef PROJEKT_METODIK_GRID_H
#define PROJEKT_METODIK_GRID_H

#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML//Window.hpp>
#include <SFML/System.hpp>
#include <string>
#include <cstdlib>
#include <iostream>

class grid {
private:
    struct cell {
        size_t x, y;
        bool black;
    };
    size_t height;
    size_t width;
    std::vector<std::vector<cell>> cells;
public:
    /**
     * @brief Constructor for the Grid class, initializing its dimensions and cell states.
     *
     * This constructor creates a grid with the specified height and width. It also initializes the grid's cells,
     * setting each cell's coordinates and state (black or white).
     *
     * @param h The height of the grid.
     * @param w The width of the grid.
     */
    grid(size_t h, size_t w);

    /**
     * @brief Get the color of a cell at the specified coordinates.
     *
     * If the provided coordinates (x, y) are within the grid's dimensions, this function returns the color of the cell at
     * that location, which can be either black or white.
     *
     * @param x The X-coordinate of the cell.
     * @param y The Y-coordinate of the cell.
     * @return The color of the cell as an SFML Color.
     */
    sf::Color getCellColor(size_t x, size_t y) const;

    /**
     * @brief Toggle the color of a cell at the specified coordinates.
     *
     * If the provided coordinates (x, y) are within the grid's dimensions, this function toggles the color of the cell
     * at that location, changing it from black to white or vice versa.
     *
     * @param x The X-coordinate of the cell.
     * @param y The Y-coordinate of the cell.
     */
    void toggleCellColor(size_t x, size_t y);

    /**
     * @brief Get the height of the grid.
     * @return The height of the grid as a size_t.
     */
    size_t getHeight() const;

    /**
     * @brief Get the width of the grid.
     * @return The width of the grid as a size_t.
     */
    size_t getWidth() const;

    /**
     * @brief Draw the grid on a given SFML window.
     * This function draws a grid by creating and rendering individual cells as rectangles on the provided SFML window.
     * The color of each cell is determined by its state (black or white).
     * @param window The SFML window on which the grid should be drawn.
     */
    void drawGrid(sf::RenderWindow& window);

};


#endif //PROJEKT_METODIK_GRID_H
