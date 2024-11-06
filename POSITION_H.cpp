#ifndef POSITION_H
#define POSITION_H

#include <cmath>

class Position {
public:
    Position(int x = 0, int y = 0);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    int Distance(const Position& other) const;
    void MoveTowards(Position& target);

private:
    int x;
    int y;
};

#endif // POSITION_H
