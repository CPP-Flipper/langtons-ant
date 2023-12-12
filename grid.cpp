//
// Created by Filip Persson on 2023-10-15.
//
#include "grid.h"


grid::grid(size_t h, size_t w):height(h),width(w){
    cells.resize(height, std::vector<cell>(width));
    for (size_t i = 0; i < h; ++i) {
        for (size_t j = 0; j < w; ++j) {
            cells[i][j] = {i, j, false};
        }
    }
}

void grid::drawGrid(sf::RenderWindow& window) {
    sf::RectangleShape cellPixel(sf::Vector2f(10, 10));
    for (int i = 0; i < grid::getWidth(); ++i) {
        for (int j = 0; j < grid::getHeight(); ++j) {
            if (cells[i][j].black) {
                cellPixel.setFillColor(sf::Color::Black);
            } else {
                cellPixel.setFillColor(sf::Color::White);
            }
            cellPixel.setPosition(i * 10, j * 10);
            window.draw(cellPixel);
        }
    }
}

size_t grid::getHeight() const{
    return height;
}

size_t grid::getWidth() const{
    return width;
}

void grid::toggleCellColor(size_t x, size_t y) {
    if (x < width && y < height) {
        cells[x][y].black = !cells[x][y].black;
    }
}

sf::Color grid::getCellColor(size_t x, size_t y) const  {
    if (x < width && y < height) {
        if (cells[x][y].black) {
            return sf::Color::Black;
        } else {
            return sf::Color::White;
        }
    } else {
        return sf::Color::White;
    }
}
