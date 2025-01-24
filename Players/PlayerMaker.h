#include "CharacterMaker.h"
#include "JobMaker.h"
#include <string>
#include <vector>
using std::string;
using std::vector;
class Player;
#ifndef PLAYERMAKER_H
#define PLAYERMAKER_H


/**
 * @brief A utility class for creating Player objects.
 * 
 * This class provides methods to create instances of Player based on input specifications.
 */
class PlayerMaker {
private:

    static const int MAX_NAME_LEN = 15; /**< The maximum allowed length for a player's name. */
    static const int MIN_NAME_LEN = 3;  /**< The minimum allowed length for a player's name. */

public:

    /**
     * @brief Creates a Player object from a vector of strings.
     * 
     * The input vector should include the necessary details for player creation, such as name,
     * character, and job type.
     * 
     * @param characterVector A vector of strings representing the player's details.
     * @return A pointer to the created Player object.
     */
    static Player* makePlayer(vector<std::string>& characterVector);
    
};



#endif //PLAYERMAKER_H
