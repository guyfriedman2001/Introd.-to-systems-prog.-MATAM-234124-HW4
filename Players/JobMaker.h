#include "Magician.h"
#include "Warrior.h"
#include "Archer.h"
#include <cassert>
#include <string>
using std::string;
#ifndef JOBMAKER_H
#define JOBMAKER_H

class JobMaker {
  public:
    static Job* makeJob(string type);
};
#endif //JOBMAKER_H