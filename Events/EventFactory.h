#pragma once
#include <iostream>
#include "Snail.h"
#include "Slime.h"
#include "Balrog.h"
#include "Pack.h"
#include "SolarEclipse.h"
#include "PotionsMerchant.h"
#include <vector>
using std::vector;
class Event;
class EventFactory{
    private:
    vector<std::string> eventLineVector;
    public:
    EventFactory(vector<std::string> eventLineVector);
    Event* create();
};