#ifndef POINT_H
#define POINT_H

#endif // POINT_H

#include <string>

class Point {
public:
    Point(int x,int y,std::string color);
    int getX();
    int getY();
    std::string getColor();
    void setX(int x);
    void setY(int y);
    void setColor(std::string color);

private:
    int x;
    int y;
    std::string color;
};


class PointVector {
public:
private:
    Point* element;
    int size;
};
