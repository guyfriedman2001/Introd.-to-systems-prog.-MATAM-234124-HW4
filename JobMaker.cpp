//
// Created by Guy Friedman on 16/01/2025.
//
#pragma once
#include "AllPlayers.h"
#include <string>
using std::string;

class PlayerMaker {
  public:
    Player makePlayer(string type) {
        if (type == "Magician") {
            return new Magician();
        }

    }
};