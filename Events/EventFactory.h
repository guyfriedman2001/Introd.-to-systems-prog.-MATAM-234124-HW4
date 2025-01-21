#pragma once
#include "Snail.h"
#include "Slime.h"
#include "Balrog.h"
#include "Pack.h"
#include "SolarEclipse.h"
#include "PotionsMerchant.h"
#include "../Players/Player.h"
#include <string>
#include "../Utilities.h"
#include <memory>
//#include "Encounter.h"
//#include "SpecialEvent.h"
#include <iostream>
#include <vector>
using std::string;
using std::vector;

class Event;
#ifndef EVENTFACTORY_H
#define EVENTFACTORY_H
using std::vector;

class EventFactory{
    private:
    //vector<std::string> eventLineVector;
    public:
    //EventFactory(vector<std::string> eventLineVector);
    //static Event* eventFactory(vector<std::string> eventLineVector);
    static void create(vector<std::string>& eventLineVector, vector<std::shared_ptr<Event>>* events);

};

#endif //EVENTFACTORY_H