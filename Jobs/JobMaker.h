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
    static Job* makeJob(string type);
};