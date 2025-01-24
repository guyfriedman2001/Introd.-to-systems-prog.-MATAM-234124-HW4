#include "SpecialEvent.h"
#ifndef SOLARECLIPSE_H
#define SOLARECLIPSE_H
class SolarEclipse :public SpecialEvent{
    private:
    static const int EFFECT = 1;
    static const int NO_EFFECT = 0;
    static const int BAD_EFFECT = -1;
    public:
    string startEvent(Player& player) override;
    string getDescription() const override;
    SolarEclipse();
};
#endif //SOLARECLIPSE_H