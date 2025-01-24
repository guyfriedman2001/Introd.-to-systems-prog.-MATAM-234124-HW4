#include "Fast.h"
#ifndef ARCHER_H
#define ARCHER_H

class Archer : public Fast {
public:
    virtual ~Archer() = default;
    Archer() : Fast() {
        this->coins = 20;
    }
    virtual string getDescription() const override;
};



#endif //ARCHER_H
