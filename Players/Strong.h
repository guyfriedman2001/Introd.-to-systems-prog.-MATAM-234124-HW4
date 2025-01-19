//
// Created by Guy Friedman on 16/01/2025.
//
#include "Job.h"
#ifndef STRONG_H
#define STRONG_H


/**
 * @brief Represents the Strong job class type, inheriting from the Job base class.
 */
class Strong : public Job{
public:

    /**
     * @brief Destructor for the Strong job class.
     */
    virtual ~Strong() = default;

    /**
     * @brief Default constructor for the Strong job class.
     */
    Strong() : Job() {}
    string getJobType() override;
};



#endif //STRONG_H
