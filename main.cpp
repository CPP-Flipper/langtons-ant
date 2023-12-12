#include "grid.h"
#include "window.h"

/**
 * Langton's ant
 * Created by Filip Persson.
 * User defined height, width and amount of ants.
 */
int main(){
    srand(time(NULL));
    std::cout << "Enter height and width(x,y): ";
    int height,width;
    std::cin >> height >> width;

    grid g(height,width);
    window sFwindow(g);

    for (int i = 0; i < 6; ++i) {
        sFwindow.addAnt(i+rand()%g.getHeight(),i+rand()%g.getWidth());
    }

    sFwindow.run();
    return 0;
}