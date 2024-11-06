#include "Unit.h"

void Unit::print() const {
    // Реалізація друку для об'єктів класу Unit
}

Position Unit::getPosition() const {
    return position;
}

void Unit::setPosition(const Position& pos) {
    position = pos;
}

void Unit::moveTowards(Position& target) {
    position.MoveTowards(target);
}
