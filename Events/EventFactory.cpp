
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

    void EventFactory::create(vector<std::string>& eventLineVector, vector<std::shared_ptr<Event>>* events){
    int index = 0;
    //std::cout <<"-"<< eventLineVector[0]<<"-" <<std::endl;
    // for(auto wordd : eventLineVector){
    //             std::cout << wordd << std::endl;
    // }
        for(auto eventName : eventLineVector){
            //std::cout <<"-"<< eventName<<"-" <<std::endl;
            if(eventName =="skip!"){
                index++;
                continue;
            }
            else if(eventName == "Pack"){
                int packSize = std::stoi(eventLineVector[index + 1]);
                auto start = eventLineVector.begin() + index + 2;
                if(start > eventLineVector.end() || packSize < 2){
                    throw std::runtime_error("Invalid Events File");
                }
                vector<std::string> packString(start, eventLineVector.end());
                //std::cout << packSize << " ineventf " << std::endl;
                // for(int i = 0 ; i < packSize + 2; i++){
                //     eventLineVector[index + i] = "skip!";
                // }
                events->push_back(std::shared_ptr<Event>(new Pack(packString, packSize)));
                //std::cout << packSize << " after inevxentf " << std::endl;
                for(auto  i = eventLineVector.begin() + index; (i < (eventLineVector.begin() + index + packSize+2))&& (i < eventLineVector.end()); i++){
                    *i = "skip!";
                }
                //index += packSize;
                //index += packSize;
                
                
                //std::cout << packSize << "invveventf " << std::endl;
            }
            else if(eventName == "SolarEclipse"){
                events->push_back(std::shared_ptr<Event>(new SolarEclipse()));
            }
            else if(eventName == "PotionsMerchant"){
                events->push_back(std::shared_ptr<Event>(new PotionsMerchant()));
            }
            else if(eventName == "Snail"){
                events->push_back(std::shared_ptr<Event>(new Snail()));
            }
            else if(eventName == "Slime"){
                events->push_back(std::shared_ptr<Event>(new Slime()));
            }
            else if(eventName == "Balrog"){
                events->push_back(std::shared_ptr<Event>(new Balrog()));
            }
            else{
                throw std::runtime_error("Invalid Events File");
            }
            index++;
        }
        //throw std::runtime_error("Invalid Events File");
    }


//EventFactory::EventFactory(vector<std::string> eventLineVector): eventLineVector(eventLineVector){}
// Event* EventFactory::create(){
//     std::string name = eventLineVector[0];
//     if(!name.compare("SolarEclipse")){

//         return new SolarEclipse();
//     }
//     if(!name.compare("PotionsMerchant")){
//         return new PotionsMerchant();
//     }
//     if(!name.compare("Snail")){
//         return new Snail();
//     }
//     if(!name.compare("Slime")){
//         return new Slime();
//     }
//     if(!name.compare("Balrog")){
//         return new Balrog();
//     }
//     if(!name.compare("Pack")){
//         eventLineVector.erase(eventLineVector.begin());
//         return new Pack(eventLineVector);
//     }
//     throw std::runtime_error("Invalid Events File");
// }

// Event* EventFactory::eventFactory(vector<std::string> eventLineVector){
//     std::string name = eventLineVector[0];
//     if(!name.compare("Pack")){
//         eventLineVector.erase(eventLineVector.begin());
//         return new Pack(eventLineVector);
//     }
//     if( eventLineVector.size() != 1){
//         throw std::runtime_error("Invalid Events File");
//     }
//     if(!name.compare("SolarEclipse")){

//         return new SolarEclipse();
//     }
//     if(!name.compare("PotionsMerchant")){
//         return new PotionsMerchant();
//     }
//     if(!name.compare("Snail")){
//         return new Snail();
//     }
//     if(!name.compare("Slime")){
//         return new Slime();
//     }
//     if(!name.compare("Balrog")){
//         return new Balrog();
//     }
//     throw std::runtime_error("Invalid Events File");

// }
// template <class T>

// void EventFactory::create(vector<std::string> eventLineVector, vector<std::shared_ptr<T>> events)
// {
//     int index = 0;
//     for(auto eventName : eventLineVector){
//         if(!eventName.compare("skip!")){
//             index++;
//             continue;
//         }
//         if(!eventName.compare("Pack")){
//             int packSize = std::stoi(eventLineVector[index + 1]);
//             auto start = eventLineVector.begin() + index + 1;
//             auto end = eventLineVector.begin() + index + packSize + 2;
//             vector<std::string> packString(packSize);
//             copy(start, end, packString.begin());
//             events.push_back(std::shared_ptr<T>(new Pack(packString)));
//             for(int i = 0 ; i < packSize + 2; i++){
//                 eventLineVector[index + i] = "skip!";
//             }
//         }
//         if(!eventName.compare("SolarEclipse")){
//             events.push_back(std::shared_ptr<T>(new SolarEclipse()));
//         }
//         if(!eventName.compare("PotionsMerchant")){
//             events.push_back(std::shared_ptr<T>(new PotionsMerchant()));
//         }
//         if(!eventName.compare("Snail")){
//             events.push_back(std::shared_ptr<T>(new Snail()));
//         }
//         if(!eventName.compare("Slime")){
//             events.push_back(std::shared_ptr<T>(new Slime()));
//         }
//         if(!eventName.compare("Balrog")){
//             events.push_back(std::shared_ptr<T>(new Balrog()));
//         }
//         else{
//             throw std::runtime_error("Invalid Events File");
//         }
//         index++;
//     }
//     throw std::runtime_error("Invalid Events File");
// }

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