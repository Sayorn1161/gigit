#include "Position.h"

Position::Position(int x, int y) : x(x), y(y) {}

int Position::getX() const {
    return x;
}

int Position::getY() const {
    return y;
}

void Position::setX(int x) {
    this->x = x;
}

void Position::setY(int y) {
    this->y = y;
}

int Position::Distance(const Position& other) const {
    int dx = x - other.x;
    int dy = y - other.y;
    return std::sqrt(dx*dx + dy*dy);
}

void Position::MoveTowards(Position& target) {
    if (x < target.getX()) x++;
    else if (x > target.getX()) x--;

    if (y < target.getY()) y++;
    else if (y > target.getY()) y--;
}
