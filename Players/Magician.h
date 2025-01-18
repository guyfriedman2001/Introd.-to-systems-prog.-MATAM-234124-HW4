//
// Created by Guy Friedman on 16/01/2025.
//

#ifndef MAGICIAN_H
#define MAGICIAN_H
#include "Magical.h"

/**
 * @brief Represents a Magician job, a subclass of Magical.
 */
class Magician : public Magical {
public:

    /**
     * @brief Destructor for the Magician class.
     */
    virtual ~Magician() = default;

    /**
     * @brief Default constructor for the Magician class.
     */
    Magician() : Magical() {}
};



#endif //MAGICIAN_H
