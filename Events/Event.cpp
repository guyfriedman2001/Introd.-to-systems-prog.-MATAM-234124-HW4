#pragma once
#include "Event.h"
#include "EventFactory.h"

Event::Event(EventFactory* event) : event(event){}
Event::~Event(){
    delete event;
}