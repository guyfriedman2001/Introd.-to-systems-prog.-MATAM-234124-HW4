#pragma once
#include "Event.h"
#ifndef SPECIALEVENT_H
#define SPECIALEVENT_H

class SpecialEvent :public Event{
    public:
    virtual string startEvent(Player& player) = 0;
    virtual string getDescription() const = 0;
    SpecialEvent() = default;
};
#endif //SPECIALEVENT_H