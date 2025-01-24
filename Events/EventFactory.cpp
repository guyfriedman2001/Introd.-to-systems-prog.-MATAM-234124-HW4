
#include "EventFactory.h"
#include "Event.h"

std::map<std::string, std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> EventFactory::createMap(){
    return {
    {"Pack",[](vector<string>::iterator& event){ return std::shared_ptr<Event>(new Pack(event));}},
    {"SolarEclipse", [](vector<string>::iterator& event){ return std::shared_ptr<Event>(new SolarEclipse());}},
    {"PotionsMerchant",[](vector<string>::iterator& event){return std::shared_ptr<Event>(new PotionsMerchant());}},
    {"Snail",[](vector<string>::iterator& event){return std::shared_ptr<Event>(new Snail());}},
    {"Slime",[](vector<string>::iterator& event){  return std::shared_ptr<Event>(new Slime());}},
    {"Balrog",[](vector<string>::iterator& event){return std::shared_ptr<Event>(new Balrog());}}
    };
}

std::map<std::string,std::function<std::shared_ptr<Event>(vector<string>::iterator& event)>> EventFactory::eventsMap = EventFactory::createMap();

std::shared_ptr<Event> EventFactory::create(vector<string>::iterator& event){
    auto eventIterator = eventsMap.find(*event);
    if( eventIterator == eventsMap.end()){
         throw std::runtime_error("Invalid Events File");
    }
    return eventIterator->second(event);
}