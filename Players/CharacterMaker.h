#include "AllCharacters.h"
using std::string;

#ifndef CHARACTERMAKER_H
#define CHARACTERMAKER_H

/**
 * @brief A utility class to create Character objects.
 *
 * Provides functionality to create instances of different characters based on input.
 */
class CharacterMaker {
public:

    /**
     * @brief Creates a Character object based on the specified character type.
     *
     * @param character A string representing the type of character to create.
     * @return A pointer to the created Character object.
     */
    static Character* makeCharacter(string character);
};

#endif //CHARACTERMAKER_H
