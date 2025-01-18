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

/**
 * @brief A utility class for creating Player objects.
 */
class PlayerMaker {
public:

    /**
     * @brief Creates a new Player object with the specified name, character, and job.
     * 
     * @param name The name of the player.
     * @param character The name of the character to associate with the player.
     * @param job The name of the job to associate with the player.
     * @return A pointer to the newly created Player object.
     */
    static Player* makePlayer(const string& name, const string& character, const string& job) {
        Job* newjob = JobMaker::makeJob(job);
        Character* newcharacter = CharacterMaker::makeCharacter(character);
        return new Player(name, newcharacter, newjob);
    }
};



#endif //PLAYERMAKER_H
