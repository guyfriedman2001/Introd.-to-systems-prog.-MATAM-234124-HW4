#include "Monster.h"

#ifndef PACK_H
#define PACK_H
class Pack : public Monster{
    private:
    static const int MINIMUM_PACK_SIZE = 2;
    std::vector<std::shared_ptr<Monster>> monsters;
    int packSize;
    protected:
    void setNewCombatPower() override;
    public:
    Pack(vector<string>::iterator& monstersString);
    string startEvent(Player& player) override;
    string getName() const override;
    string getDescription()const override;
    int getSize() override;
    ~Pack() = default;
};
#endif //PACK_H