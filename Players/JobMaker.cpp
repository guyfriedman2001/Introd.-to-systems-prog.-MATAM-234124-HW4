//
// Created by Guy Friedman on 16/01/2025.
//
//#pragma once
#include "AllJobs.h"
#include <cassert>
#include <string>
using std::string;

    Job* JobMaker::makeJob(string type) {
        if (type == "Magician") {
            return new Magician();
        } else if (type == "Warrior") {
            return new Warrior();
        } else if (type == "Archer") {
            return new Archer();
        }
        return nullptr;
    }