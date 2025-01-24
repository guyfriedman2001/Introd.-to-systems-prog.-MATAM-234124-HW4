#include "Monster.h"

#ifndef PACK_H
#define PACK_H
class Pack : public Monster{
    private:
    std::vector<std::shared_ptr<Monster>> monsters;
    int packSize;
    public:
    Pack(vector<string>::iterator& monstersString);
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription()const override;
    int getSize() override;
    void setNewCombatPower() override;
    ~Pack() = default;
};
#endif //PACK_H