//
// Created by Guy Friedman on 16/01/2025.
//

#include "PlayerMaker.h"
#include "Player.h"

    Player* PlayerMaker::makePlayer(const string& name, const string& character, const string& job) {
        Job* newjob = JobMaker::makeJob(job);
        Character* newcharacter = CharacterMaker::makeCharacter(character);
        return new Player(name, newcharacter, newjob);
    }
