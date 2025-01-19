//
// Created by Guy Friedman on 16/01/2025.
//
#include "Job.h"
#ifndef MAGICAL_H
#define MAGICAL_H


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
    string getJobType() override;
};



#endif //MAGICAL_H
