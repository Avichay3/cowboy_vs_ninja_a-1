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

    TEST_CASE("Distance between two points")
    {
        CHECK(p1.distance(p2) == p2.distance(p1));
        CHECK(p1.distance(p2) == sqrt(2));  //sqrt((x2-x1)^2 - (y2-y1)^2)
    }

    // TEST_CASE("Move a point towards")
    // {
    //     Point p3(1, 1);
    //     Point p4(2, 2);
    //     Point p5 = Point::moveTowards(p3, p4, 1.0);
    //     CHECK(p5.distance(p4) <= 1.0);
    // }
}