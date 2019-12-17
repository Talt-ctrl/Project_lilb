#ifndef WAKING_WORLD
#define WAKING_WORLD

#include "Object.h"

#include <SFML/Graphics.hpp>
#include <math.h>
#include <chrono>
#include <vector>
#include <iostream>
#include <random>


class WakingWorld {
public:
    WakingWorld();
    void enter(); // called whenever stage switches back to waking world

private:
    void mainLoop();  // main game loop, gets input and calls update
    void generate();  // generates terrain
    void updateWorld(sf::RenderWindow &window);  // update world draws world and calls generate

    std::vector<Object> worldVector;

    int maxSpeed = 15;

    int numberOfObjectTypes = 2;

    int playerX = 0;
    int playerY = 0;

    int windowX = 1000;
    int windowY = 1000;

    double speedX = 0;
    double speedY = 0;

    double maxXReached = 0;
    double minXReached = 0;

    double maxYReached = 0;
    double minYReached = 0;

    const double PI = 3.14159265;
};


#endif
