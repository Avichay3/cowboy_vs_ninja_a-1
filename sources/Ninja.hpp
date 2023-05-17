#pragma once
#include "Character.hpp"

namespace ariel{
    class Ninja : public Character{ // inheritence

        int _speed;

        public:
            Ninja(std::string name, Point location, int hit_points, int speed); //constructor

            void move(Character *other);

            void slash(Character *other);



    };
}