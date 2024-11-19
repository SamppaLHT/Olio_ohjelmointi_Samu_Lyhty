#ifndef ENGINE_H
#define ENGINE_H
#include <string>

using namespace std;

class Engine
{
public:
    Engine();
    Engine(int horsepower, double displacement);

    int getHorsepower() const;
    void setHorsepower(int newHorsepower);

    double getDisplacement() const;
    void setDisplacement(double newDisplacement);

private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
