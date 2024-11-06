#ifndef UNIT_H
#define UNIT_H

#include "IPrint.h"
#include "Position.h"

class Unit : public IPrint {
public:
    virtual void action() = 0;
    void print() const override;
    Position getPosition() const;
    void setPosition(const Position& pos);
    void moveTowards(Position& target);

    virtual ~Unit() = default;

private:
    Position position;
};

#endif // UNIT_H
