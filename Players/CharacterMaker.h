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
    static Character* makeCharacter(string character);
};



#endif //CHARACTERMAKER_H
