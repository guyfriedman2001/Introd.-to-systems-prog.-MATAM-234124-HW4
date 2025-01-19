#pragma once
#include <iostream>
#include "Event.h"
#ifndef ENCOUNTER_H
#define ENCOUNTER_H
class Encounter : public Event{
    public:
    virtual std::string startEvent(Player& player) = 0;
    virtual std::string getDescription() const = 0;
    Encounter() = default;
    virtual ~Encounter() = default;
};
#endif //ENCOUNTER_H