#include<string>
#include <memory>
#include <iostream>
using std::string;
class Player;

#ifndef CHARACTER_H
#define CHARACTER_H

/**
 * @brief Represents a character in the game.
 *
 * Serves as a base class for all types of characters with specific attributes and behavior.
 */
class Character {
public:

    /**
     * @brief Default destructor for Character.
     */
    virtual ~Character() = default;

    /**
     * @brief Retrieves the class name of the character.
     *
     * @return A string representing the character's class name.
     */
    virtual string getClassName();

    /**
     * @brief Retrieves a description of the character.
     *
     * @return A string describing the character.
     */

    virtual string getDescription() const;

    /**
     * @brief Default constructor for Character.
     */
    Character();

};
#endif //CHARACTER_H
