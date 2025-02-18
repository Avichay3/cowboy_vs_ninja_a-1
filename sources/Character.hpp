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

        Character(std::string name, Point &location);

        bool isAlive();

        double distance(Point *other);

        void hit(int);

        std::string getName() const; 

        Point getLocation() ;

        virtual std::string print(); //virtual for the ability to ovveride it
        


    };
}