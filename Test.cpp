#include "doctest.h"
#include <iostream>
#include "sources/Team.hpp"
#include <vector>
#include "Point.hpp"
#include <math.h>
#include <sstream>
// using namespace ariel;
using namespace ariel;

TEST_SUITE("Point tests")
{
    Point p1(1, 2);
    Point p2(2, 3);
    Point p3(5, 6);
    Point p4(-1, -2);

    TEST_CASE("Distance between two points")
    {
        CHECK(p1.distance(p2) == p2.distance(p1));
        CHECK(p1.distance(p2) == 1);  //sqrt((x2-x1)^2 - (y2-y1)^2)
        CHECK(p3.distance(p4) == 1);
        CHECK(p4.distance(p3) == 1);
        CHECK(p3.distance(p1) == 1);
        CHECK(p4.distance(p1) == 1);
        CHECK(p1.distance(p4) == 1);

    }
}



TEST_SUITE("Character tests")
{
    Point p(0, 2);
    Character *char1 = new Cowboy("Avichay", p);
    Character *char2 = new Cowboy("Orel", p);

    TEST_CASE("Get character name")
    {
        CHECK(char1->getName() == "Avichay");
        CHECK(char2->getName() == "Orel");
    }

    TEST_CASE("Get character location")
    {
        CHECK(char1->getLocation().distance(p) == 1);
        CHECK(char2->getLocation().distance(p) == 1);
    }

    TEST_CASE("Test if character is alive")
    {
        CHECK(char1->isAlive() == false);
        CHECK(char2->isAlive() == false);

    }   

}





TEST_CASE("Test the Charcters creation")
{
	Cowboy c("Cowboy", Point(1, 2));
	YoungNinja y("Young Ninja", Point(3, 4));

	CHECK(c.getName()== "Cowboy"); //check equality
	CHECK(y.getName()== "Young Ninja"); //check equality
}


TEST_CASE("Check Cowboy initialization") 
{
    Point p(1,5);
    Cowboy * Avi = new Cowboy("Avi", p);
    CHECK("Avi"==Avi->getName());
    CHECK(Avi->hasBullets()==false);
}


    TEST_CASE("Adding characters to team")
    {
        Point p1(2, 4);
        Point p2(6, 8);
        Character *char1 = new Cowboy("Yoni", p1);
        Character *char2 = new Ninja("Orel", p2);
        Character *char3 = new Cowboy("Avi", p1);
        Character *char4 = new Ninja("Avichay", p2);
        
        Team *t1 = new Team(char1); 
        Team *t2 = new Team(char2); 
        t1->add(char3);                  
        t2->add(char4);                  
        CHECK(t1->stillAlive() == 1); 
        CHECK(t2->stillAlive() == 1); 

    }

    TEST_SUITE("YoungNinja class tests")
    {
        Point p1(2, 4);
        YoungNinja *ninja = new YoungNinja("Avichay", p1);

        TEST_CASE("Move towards an enemy")
        {
            Point p2(4, 4);
            Character *char1 = new Cowboy("Orel", p2);
            ninja->move(char1);
            CHECK(ninja->getLocation().distance(p2) < 2.0);
        }

        TEST_CASE("Slash enemy")
        {
            Point p2(6, 8);
            Character *char1 = new Cowboy("Salamon", p2);
            ninja->slash(char1);
            CHECK(char1->isAlive() == false);
        }

    }


