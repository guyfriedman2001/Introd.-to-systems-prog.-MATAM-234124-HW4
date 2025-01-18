#pragma once
#include "Event.h"

class SpecialEvent :public Event{
    public:
    virtual string startEvent(Player& player) = 0;
    virtual string getDescription() const = 0;
    SpecialEvent() = default;
};