//
// Created by Jasmine Madora-Rivas on 5/6/24.
//

#include "Point.h"
#include <sstream>
using std::stringstream;

Point::Point(){
    _x=0;
    _y=0;
    _z=0;
}

Point::Point(const double &X, const double &Y, const double &Z) {
    _x = X;
    _y = Y;
    _z = Z;
}

void Point::SetX(const double &X) {
    _x = X;
}

void Point::SetY(const double &Y) {
    _y = Y;
}

void Point::SetZ(const double &Z) {
    _z = Z;
}

double Point::GetX() const {
    return _x;
}

double Point::GetY() const {
    return _y;
}

double Point::GetZ() const {
    return _z;
}

string Point::ToString() const {
    stringstream sstrm;

    sstrm << "(" << _x << "," << _y << "," << _z << ")";
    return sstrm.str();
}


