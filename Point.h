//
// Created by Jasmine Madora-Rivas on 5/6/24.
//

#ifndef PRACTICECLASSPROJ__POINT_H
#define PRACTICECLASSPROJ__POINT_H
#include <string>
using std::string;

class Point {
    // class member
private:
    double _x;
    double _y;
    double _z;

    // class method
public:
    //constructor
    Point();
    Point(const double& X, const double& Y, const double& Z);
    // setter
    void SetX(const double& X);
    void SetY(const double& Y);
    void SetZ(const double& Z);
    // getter
    double GetX() const;
    double GetY() const;
    double GetZ() const;
    // to string
    string ToString() const;

};


#endif //PRACTICECLASSPROJ__POINT_H
