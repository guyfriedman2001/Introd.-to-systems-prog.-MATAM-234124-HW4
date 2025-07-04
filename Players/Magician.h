#include "Magical.h"
#ifndef MAGICIAN_H
#define MAGICIAN_H
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

    /**
     * @brief Retrieves a description of the Magician job.
     *
     * @return A string describing the Magician.
     */
    virtual string getDescription() const override;

};



#endif //MAGICIAN_H
