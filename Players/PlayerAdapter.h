#pragma once

#include "Player.h"
#include "Job.h"
#include "Character.h"
#include "PlayerMaker.h"

class PlayerAdapter {
protected:
    Player* player;
public:
    virtual ~PlayerAdapter(){
        delete this->player;
    }

    PlayerAdapter() = delete;

    PlayerAdapter(Player* player){
        this->player = player;
    }

    PlayerAdapter(const string& name, const string& character, const string& job){
        this->player = PlayerMaker::makePlayer(name, character, job);
    }


};