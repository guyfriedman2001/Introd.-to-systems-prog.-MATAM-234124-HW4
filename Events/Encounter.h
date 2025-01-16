#pragma once
#include "Event.h"

class Encounter :public Event{
    public:
    virtual void startEvent(Player* player) = 0;
};