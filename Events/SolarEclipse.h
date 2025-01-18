#pragma once
#include "SpecialEvent.h"

class SolarEclipse :public SpecialEvent{
    private:
    unsigned int effect;
    public:
    string startEvent(Player& player) override;
    string getDescription() const override;
    SolarEclipse();
};