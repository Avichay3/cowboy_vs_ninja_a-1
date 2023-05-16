#include "Character.hpp"
using namespace ariel;
using namespace std;


Character::Character(string name, Point &location, int hit_points) : _name(name), _location(location), _hit_points(hit_points) {} //initialization list

bool Character::isAlive() {
	return false;
}


double distance( Character *other) {
	return 1.0;
}


void hit(int){
    cout<<"hit"<<endl;
}

string Character::getName() const{
	return " ";
}

Point getLocation() {
    return 1.0;
}

