#pragma once
#include <iostream>
#include <vector>
#ifndef EVENTFACTORY_H
#define EVENTFACTORY_H

using std::vector;
class Event;
class EventFactory{
    private:
    vector<std::string>* eventLineVector;
    public:
    EventFactory(vector<std::string>* eventLineVector);
    Event* create();
};

#endif //EVENTFACTORY_H