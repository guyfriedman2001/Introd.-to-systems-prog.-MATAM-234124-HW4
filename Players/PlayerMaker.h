//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef PLAYERMAKER_H
#define PLAYERMAKER_H

#include "JobMaker.h"
#include "CharacterMaker.h"
#include "Player.h"
#include <string>
using std::string;


class PlayerMaker {
public:
    static Player* makePlayer(const string& name, const string& character, const string& job) {
        Job* newjob = JobMaker::makeJob(job);
        Character* newcharacter = CharacterMaker::makeCharacter(character);
        return new Player(name, newcharacter, newjob);
        //fixme todo add logic to create charachter and job for player
    }
};



#endif //PLAYERMAKER_H
