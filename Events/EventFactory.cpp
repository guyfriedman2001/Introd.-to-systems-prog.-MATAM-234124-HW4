
#include "EventFactory.h"
#include "Event.h"
// #include "Snail.h"
// #include "Slime.h"
// #include "Balrog.h"
// #include "Pack.h"
// #include "SolarEclipse.h"
// #include "PotionsMerchant.h"
// #include "Encounter.h"
// #include "SpecialEvent.h"

EventFactory::EventFactory(vector<std::string>* eventLineVector): eventLineVector(eventLineVector){}
Event* EventFactory::create(){
    std::string name = (*eventLineVector)[0];
    std::cout<< name << std::endl;
    if(!name.compare("SolarEclipse")){

        return new SolarEclipse();
    }
    if(!name.compare("PotionsMerchant")){
        return new PotionsMerchant();
    }
    if(!name.compare("Snail")){
        return new Snail();
    }
    if(!name.compare("Slime")){
        return new Slime();
    }
    if(!name.compare("Balrog")){
        return new Balrog();
    }
    if(!name.compare("Pack")){
        (*eventLineVector).erase((*eventLineVector).begin());
        return new Pack(eventLineVector);
    }
    throw std::runtime_error("invalid event!");
}

// if((*eventLineVector)[0] == "SolarEclipse"){

//         return new SolarEclipse();
//     }
//     if((*eventLineVector)[0] == "PotionsMerchant"){
//         return new PotionsMerchant();
//     }
//     if((*eventLineVector)[0] == "Snail"){
//         std::cout<<"here snail" <<std::endl;
//         return new Snail();
//     }
//     if((*eventLineVector)[0] == "Slime"){
//         return new Slime();
//     }
//     if((*eventLineVector)[0] == "Balrog"){
//         return new Balrog();
//     }
//     if((*eventLineVector)[0] == "Pack"){
//         (*eventLineVector).erase((*eventLineVector).begin());
//         return new Pack(eventLineVector);
//     }
//     throw std::runtime_error("invalid event!");