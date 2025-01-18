#pragma once
#include "Event.h"

Event::Event(EventFactory* event) : event(event){}
Event::~Event(){
    delete event;
}