#pragma once

#include "PlayerMaker.h"
#include "MatamPlayer.h"

class MatamPlayerMaker : public PlayerMaker {
public:
    static MatamPlayer* makeMatamPlayer(const string& name, const string& character, const string& job) {
        Player* player = makePlayer(name, character, job);
        return new MatamPlayer(player);
    }
};