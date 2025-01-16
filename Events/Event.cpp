#include "Event.h"
#include "EventFactory.h"

string Event::getDescription() const{
    //TODO
}

Event::Event(EventFactory* event) : event(event){}