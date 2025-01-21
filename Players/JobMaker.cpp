//
// Created by Guy Friedman on 16/01/2025.
//
//#pragma once
#include "AllJobs.h"
#include <cassert>
#include <string>
using std::string;
#include "JobMaker.h"

    Job* JobMaker::makeJob(string type) {
        //bool debugBool = false;

        if (type == "Magician") {
            return new Magician();
        } else if (type == "Warrior") {
            return new Warrior();
        } else if (type == "Archer") {
            return new Archer();
        }
        // else{
        //     //debugBool= true;
        // }

        //if there is no match to any job type
        //assert(!debugBool);
        throw std::runtime_error("Invalid Players File");


    }