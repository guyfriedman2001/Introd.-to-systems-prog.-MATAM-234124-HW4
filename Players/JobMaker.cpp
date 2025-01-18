//
// Created by Guy Friedman on 16/01/2025.
//
#pragma once
#include "AllJobs.h"
#include <cassert>
#include <string>
using std::string;

class JobMaker {
  public:
    static Job* JobMaker::makeJob(string type) {
        bool debugBool = true;

        if (type == "Magician") {
            return new Magician();
        } else if (type == "Warrior") {
            return new Warrior();
        } else if (type == "Archer") {
            return new Archer();
        }

        //if there is no match to any job type
        assert(!debugBool);
        return nullptr;


    }
};