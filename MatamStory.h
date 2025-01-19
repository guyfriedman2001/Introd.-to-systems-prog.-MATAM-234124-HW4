
#pragma once

#include <iostream>

#include "Players/Player.h"
#include "Events/Event.h"
#include "Events/AllEvents.h"
#include <algorithm>
#include <vector>


class MatamStory{
private:
    unsigned int m_turnIndex;
    vector<Event*> events;
    vector<Player*> players;
    bool iswinner;
    Player* winner;

    /**
     * Playes a single turn for a player
     *
     * @param player - the player to play the turn for
     *
     * @return - void
    */
    void playTurn(Player& player);

    /**
     * Plays a single round of the game
     *
     * @return - void
    */
    void playRound();

    /**
     * Checks if the game is over
     *
     * @return - true if the game is over, false otherwise
    */
    bool isGameOver();
    vector<std::string> lineToVector(std::string line);
    void createLeaderBoard();
    static bool compare(Player* player1, Player* player2);

public:
    /**
     * Constructor of MatamStory class
     *
     * @param eventsStream - events input stream (file)
     * @param playersStream - players input stream (file)
     *
     * @return - MatamStory object with the given events and players
     *
    */
    MatamStory(std::istream& eventsStream, std::istream& playersStream);

    /**
     * Plays the entire game
     *
     * @return - void
    */
    void play();
};
