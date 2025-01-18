//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef MAGICAL_H
#define MAGICAL_H
#include "Job.h"

/**
 * @brief Represents a Magical job, a subclass of Job.
 */
class Magical : public Job{
public:


    /**
     * @brief Destructor for the Magical class.
     */
    virtual ~Magical() = default;


    /**
     * @brief Default constructor for the Magical class.
     */
    Magical() : Job() {};
};



#endif //MAGICAL_H
