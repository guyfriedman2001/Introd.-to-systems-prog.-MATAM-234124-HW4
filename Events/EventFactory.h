#pragma once
#include "AllEvents.h"
#include "../Utilities.h"

class Event;
#ifndef EVENTFACTORY_H
#define EVENTFACTORY_H

class EventFactory{
    private:
    static std::map<std::string, std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> eventsMap;
    static std::map<std::string, std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> createMap();
    public:
    static std::shared_ptr<Event> create(vector<string>::iterator& event);
};

#endif //EVENTFACTORY_H

