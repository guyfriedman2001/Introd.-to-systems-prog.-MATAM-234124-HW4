#include "Magician.h"
#include "Warrior.h"
#include "Archer.h"
#include <cassert>
#include <string>
using std::string;
#ifndef JOBMAKER_H
#define JOBMAKER_H

/**
 * @brief A utility class to create Job objects.
 *
 * Provides functionality to create instances of different job types based on input.
 */
class JobMaker {
  public:
    /**
     * @brief Creates a Job object based on the specified job type.
     *
     * @param type A string representing the type of job to create (e.g., "Magician," "Warrior," "Archer").
     * @return A pointer to the created Job object.
     */
    static Job* makeJob(string type);
};
#endif //JOBMAKER_H