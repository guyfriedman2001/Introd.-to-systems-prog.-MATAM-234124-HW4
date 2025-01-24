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
    virtual string getDescription() const override;

};



#endif //MAGICIAN_H
