#include "Character.hpp"
using namespace ariel;
using namespace std;


Character::Character(string name, Point &location, int hit_points) : _name(name), _location(location), _hit_points(hit_points) {} //initialization list

bool Character::isAlive() {
	return false;
}

double ariel::Character::distance(Point *other){
    return (double)1;
}


void Character::hit(int){
    cout<<"hit"<<endl;
}

string Character::getName() const{
	return " ";
}

Point getLocation() {
    return Point(1.0,2.0);
}

string Character::print (){
	return " ";
}