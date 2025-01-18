//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef STRONG_H
#define STRONG_H
#include "Job.h"

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
};



#endif //STRONG_H
