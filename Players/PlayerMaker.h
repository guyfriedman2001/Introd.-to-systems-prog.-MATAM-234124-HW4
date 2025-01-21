//
// Created by Guy Friedman on 16/01/2025.
//



//#include "Player.h"
#include "CharacterMaker.h"
#include "JobMaker.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
class Player;
//#include "Player.h"
#ifndef PLAYERMAKER_H
#define PLAYERMAKER_H
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
    static Player* makePlayer(const string& name, const string& character, const string& job);
    static Player* makePlayer(vector<std::string>& characterVector);
};



#endif //PLAYERMAKER_H
