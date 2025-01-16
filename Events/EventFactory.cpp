#pragma once
#include "EventFactory.h"
#include "string.h"

EventFactory::EventFactory(vector<std::string> eventLineVector): eventLineVector(eventLineVector){}
Event* EventFactory::create(){
    if(eventLineVector[0] == "SolarEclipse"){
        return new SolarEclipse();
    }
    if(eventLineVector[0] == "PotionsMerchant"){
        return new PotionsMerchant();
    }
    if(eventLineVector[0] == "Snail"){
        return new Snail();
    }
    if(eventLineVector[0] == "Slime"){
        return new Slime();
    }
    if(eventLineVector[0] == "Balrog"){
        return new Balrog();
    }
    if(eventLineVector[0] == "Pack"){
        return new Pack(eventLineVector);
    }
}