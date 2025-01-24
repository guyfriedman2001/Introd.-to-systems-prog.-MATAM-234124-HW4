
#include "EventFactory.h"
#include "Event.h"

std::shared_ptr<Event> EventFactory::create(vector<string>::iterator& event){
    try{
            if(*event == "Pack"){
                return std::shared_ptr<Event>(new Pack(event));
            }
            else if(*event == "SolarEclipse"){
                return std::shared_ptr<Event>(new SolarEclipse());
            }
            else if(*event == "PotionsMerchant"){
                return std::shared_ptr<Event>(new PotionsMerchant());
            }
            else if(*event == "Snail"){
               return std::shared_ptr<Event>(new Snail());
            }
            else if(*event == "Slime"){
                return std::shared_ptr<Event>(new Slime());
            }
            else if(*event == "Balrog"){
                return std::shared_ptr<Event>(new Balrog());
            }
            else{
                throw std::runtime_error("Invalid Events File");
            }
        }
    catch(std::runtime_error& e){
        throw(e);
    }
}