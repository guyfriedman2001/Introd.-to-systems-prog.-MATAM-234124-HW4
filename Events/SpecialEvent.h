//#pragma once
//class Event;
#include "Event.h"
#include "../Players/Player.h"
#include <string>
#include <vector>
#ifndef SPECIALEVENT_H
#define SPECIALEVENT_H
class SpecialEvent :public Event{
    public:
    virtual string startEvent(Player& player) = 0;
    virtual string getDescription() const = 0;
    SpecialEvent() = default;
};
#endif //SPECIALEVENT_H