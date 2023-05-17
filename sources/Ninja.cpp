#include "Ninja.hpp"
using namespace ariel;

Ninja::Ninja(std::string name, Point location, int hit_points, int speed) : 
Character(name,location,hit_points),_speed(speed){} //constructor

void Ninja::move(Character *other){
    return;
}

void Ninja::slash(Character *other){
    return;
}



