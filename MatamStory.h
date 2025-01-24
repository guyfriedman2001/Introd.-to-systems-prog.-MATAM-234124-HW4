
#pragma once

#include <iostream>

#include "Players/Player.h"
#include "Events/Event.h"
#include <algorithm>
#include <vector>
#include <memory>
using std::shared_ptr;


class MatamStory{
private:
    unsigned int m_turnIndex;
    vector<shared_ptr<Event>> events;
    vector<shared_ptr<Player>> players;
    bool iswinner;
    shared_ptr<Player> winner;

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
    vector<std::string> fileToVector(std::istream& file);
    void createLeaderBoard();
    static bool compare(shared_ptr<Player> player1, shared_ptr<Player> player2);

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
    ~MatamStory();
};
