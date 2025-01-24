#include "Monster.h"
#ifndef SNAIL_H
#define SNAIL_H
class Snail : public Monster{
    public:
    Snail();
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription() const override;
};
#endif //SNAIL_H