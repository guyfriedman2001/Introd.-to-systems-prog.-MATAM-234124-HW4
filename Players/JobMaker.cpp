#include "AllJobs.h"
#include <string>
using std::string;
#include "JobMaker.h"

    Job* JobMaker::makeJob(string type) {
        if (type == "Magician") {
            return new Magician();
        } else if (type == "Warrior") {
            return new Warrior();
        } else if (type == "Archer") {
            return new Archer();
        }
    
        throw std::runtime_error("Invalid Players File");


    }