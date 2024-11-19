#include "engine.h"
#include <string>

using namespace std;

Engine::Engine() : horsepower(0), displacement(0.0) {}

Engine::Engine(int newHorsepower, double newDisplacement) : horsepower(newHorsepower), displacement(newDisplacement) {}

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}
