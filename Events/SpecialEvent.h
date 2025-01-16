#pragma once
#include "Event.h"

class SpecialEvent :public Event{
    public:
    virtual void startEvent(Player* player) = 0;
    SpecialEvent() = default;
};