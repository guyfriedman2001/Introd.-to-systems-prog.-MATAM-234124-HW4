//
// Created by Guy Friedman on 16/01/2025.
//
#include "Fast.h"
#ifndef ARCHER_H
#define ARCHER_H

/**
 * @brief Represents the Archer job, a subclass of Fast.
 */
class Archer : public Fast {
public:

    /**
     * @brief Destructor for the Archer class.
     */
    virtual ~Archer() = default;

    /**
     * @brief Default constructor for the Archer class.
     *
     * Initializes the Archer with default values, setting the coins to 20.
     */
    Archer() : Fast() {
        this->coins = 20;
    }

    /**
     * @brief Provides a description of the Archer job.
     *
     * @return A string representing the Archer job.
     */
    virtual string getDescription() const override;
};



#endif //ARCHER_H
