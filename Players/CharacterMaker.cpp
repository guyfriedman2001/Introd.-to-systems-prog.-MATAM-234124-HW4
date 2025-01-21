//
// Created by Guy Friedman on 16/01/2025.
//

#include "CharacterMaker.h"
#include "Character.h"


Character* CharacterMaker::makeCharacter(string character) {
        if (character == "RiskTaking") {
            return new RiskTaking();
        }
        else if (character == "Responsible") {
            return new Responsible();
        }
        throw std::runtime_error("Invalid Players File");
    }