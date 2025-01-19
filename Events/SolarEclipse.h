//#pragma once
//class SpecialEvent;
#include "SpecialEvent.h"
#ifndef SOLARECLIPSE_H
#define SOLARECLIPSE_H
class SolarEclipse :public SpecialEvent{
    private:
    unsigned int effect;
    public:
    string startEvent(Player& player) override;
    string getDescription() const override;
    SolarEclipse();
};
#endif //#include SOLARECLIPSE_H