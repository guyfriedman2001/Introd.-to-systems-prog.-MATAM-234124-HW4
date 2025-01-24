#pragma once
#include "AllEvents.h"
#include "../Utilities.h"

class Event;
#ifndef EVENTFACTORY_H
#define EVENTFACTORY_H

/**
 * @brief Manages the creation of Event objects.
 *
 * Provides utilities to create Event objects using a factory pattern.
 */
class EventFactory{
private:

    /**
     * @brief Holds mappings for creating specific Event objects.
     */
    static std::map<std::string, std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> eventsMap;
    
    /**
     * @brief Initializes the event creation map.
     *
     * @return A map linking event identifiers to creation functions.
     */
    static std::map<std::string, std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> createMap();

public:

    /**
     * @brief Creates an Event object.
     *
     * @param event An iterator pointing to event details.
     * @return A shared pointer to the created Event object.
     */
    static std::shared_ptr<Event> create(vector<string>::iterator& event);
};

#endif //EVENTFACTORY_H

