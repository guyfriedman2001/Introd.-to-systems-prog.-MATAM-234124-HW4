//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef CHARACTERMAKER_H
#define CHARACTERMAKER_H
#include "AllCharacters.h"
#include <string>
using std::string;


class CharacterMaker {
public:
    static Character* makeCharacter(string character) {
        if (character == "RiskTaking") {
            return new RiskTaking();
        }
        else if (character == "Responsible") {
            return new Responsible();
        }
        return nullptr;
    }
};



#endif //CHARACTERMAKER_H
