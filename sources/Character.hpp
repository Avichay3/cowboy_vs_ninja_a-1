
#pragma once
#include "Point.hpp"
#include <iostream>


namespace ariel{
    class Character{

        Point &_location;
        int _hit_points;
        std::string _name;


    public:
        Character(std::string name, Point &location, int hit_points); //constructor with all parameters inside

        bool isAlive();

        double distance(Point *other);

        void hit(int);

        std::string getName() const{ return _name; } //inline function

        Point getLocation() const{ ; }

        string print();
        


    };
}