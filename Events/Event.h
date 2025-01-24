#include <string>
#include <iostream>
#include <vector>
#include <functional>
#include <stdexcept>
#include <memory>
#include <map>
#include "../Players/Player.h"
using std::string;
using std::vector;
#include "EventFactory.h"

#ifndef EVENT_H
#define EVENT_H
class Event {
public:
    /**
     * Gets the description of the event
     *
     * @return - the description of the event
    */
    virtual string getDescription() const = 0;
    virtual string startEvent(Player& player) = 0;
    Event() = default;
    virtual ~Event() = default;
};
#endif //EVENT_H