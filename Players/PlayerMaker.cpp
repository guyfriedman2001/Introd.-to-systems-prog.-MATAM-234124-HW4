//
// Created by Guy Friedman on 16/01/2025.
//

#include "PlayerMaker.h"
#include "Player.h"

    Player* PlayerMaker::makePlayer(const string& name, const string& character, const string& job) {
        Job* newjob = JobMaker::makeJob(job);
        Character* newcharacter = CharacterMaker::makeCharacter(character);
        if(newjob == nullptr || newcharacter==nullptr){
            throw std::runtime_error("Invalid Players File");
        }
        return new Player(name, newcharacter, newjob);
         
    }

    Player *PlayerMaker::makePlayer(vector<std::string> characterVector)
    {
        if(characterVector.size() != 3 || (characterVector[0].length() > 15)){
             throw std::runtime_error("Invalid Players File");
        }
        Job* newjob = JobMaker::makeJob(characterVector[1]);
        Character* newcharacter = CharacterMaker::makeCharacter(characterVector[2]);
        if(newjob == nullptr || newcharacter==nullptr){
            throw std::runtime_error("Invalid Players File");
        }
        return new Player(characterVector[0], newcharacter, newjob);
    } 
