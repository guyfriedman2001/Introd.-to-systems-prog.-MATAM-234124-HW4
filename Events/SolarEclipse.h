#pragma once
#include "SpecialEvent.h"

class SolarEclipse :public SpecialEvent{
    private:
    unsigned int effect;
    public:
    void startEvent(Player* player) override;
    SolarEclipse();
};