#include "SpecialEvent.h"
#ifndef SOLARECLIPSE_H
#define SOLARECLIPSE_H
class SolarEclipse :public SpecialEvent{
    private:
    int effect;
    public:
    string startEvent(Player& player) override;
    string getDescription() const override;
    SolarEclipse();
};
#endif //SOLARECLIPSE_H