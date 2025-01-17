//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef PLAYERMAKER_H
#define PLAYERMAKER_H
#include "JobMaker.h"
#include "CharacterMaker.h"
#include <string>
using std::string;


class PlayerMaker {
public:
    Player* makePlayer(const string& name, const string& character, const string& job) {
        Player* player = new Player();
    }
};



#endif //PLAYERMAKER_H
