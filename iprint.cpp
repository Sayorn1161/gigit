#include "IPrint.h"
#include "Array.h"
#include "Unit.h"
#include "Team.h"
#include "Position.h"
#include <iostream>

class Soldier : public Unit {
public:
    void action() override {
        std::cout << "Soldier action!" << std::endl;
    }

    void print() const override {
        std::cout << "Soldier at position (" << getPosition().getX() << ", " << getPosition().getY() << ")" << std::endl;
    }
};

int main() {
    Team team;
    Soldier* soldier1 = new Soldier();
    Position pos1(10, 20);
    Position pos2(13, 24);

    soldier1->setPosition(pos1);
    team.addUnit(soldier1);
    
    std::cout << "Distance: " << pos1.Distance(pos2) << std::endl;

    soldier1->moveTowards(pos2);
    team.print();

    delete soldier1;

    return 0;
}
