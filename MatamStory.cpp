
#include "MatamStory.h"
#include "Utilities.h"
#include <fstream>
#include <string>
#include <sstream>


MatamStory::MatamStory(std::istream& eventsStream, std::istream& playersStream) {

    /*===== TODO: Open and read events file =====*/

    std::string line;
    vector<std::string> eventLines;
    while(std::getline(eventsStream, line)){
        EventFactory tempEvent = EventFactory(lineToVector(line));
        this->events.push_back(tempEvent.create()); 
    }

    // for(auto event :events){
    //     std::cout << event->getDescription() << std::endl;
    // }

    /*==========================================*/


    /*===== TODO: Open and Read players file =====*/

    /*============================================*/
    
    while(std::getline(playersStream, line)){
        vector<std::string> linee = lineToVector(line);
        this->players.push_back(PlayerMaker::makePlayer(linee[0], linee[2], linee[1])); 
    }

    // for(auto player :players){
    //     std::cout << player->getDescription() << std::endl;
    // }

    this->m_turnIndex = 1;
    this->iswinner = false;
    this->winner = nullptr;
}

vector<std::string> MatamStory::lineToVector(std::string line){
    vector<std::string> eventLineVector;
    std::istringstream lineStream(line);
    std::string letter;
        while (lineStream >> letter) { 
            eventLineVector.push_back(letter);
        }
    return eventLineVector;
    //std::string word;
    // for(char letter : line){
    //     //char letter = line[i];
        
    //     if((letter ==' ')){
    //         if(!word.empty()){
    //             eventLineVector.push_back(word);
    //             word.clear();
    //         }
    //     }
    //     else{
    //         std::cout << "the letter -" << letter << "-"<< std::endl;
    //         word += letter;
    //     }
    // }
    // if(!word.empty()){
    //     eventLineVector.push_back(word);
    // }

    // return eventLineVector;
}

void MatamStory::playTurn(Player& player) {

    /**
     * Steps to implement (there may be more, depending on your design):
     * 1. Get the next event from the events list V
     * 2. Print the turn details with "printTurnDetails" V
     * 3. Play the event V
     * 4. Print the turn outcome with "printTurnOutcome" V
    */
   Event* currentEvent = events[0];
   events.erase(events.begin());
   events.push_back(currentEvent);
   printTurnDetails(m_turnIndex, player,*currentEvent);
   printTurnOutcome(currentEvent->startEvent(player));

    m_turnIndex++;
}

void MatamStory::playRound() {

    printRoundStart();

    /*===== TODO: Play a turn for each player =====*/
    
    for(auto player : players){
        if(!player->isKOd()){
            playTurn(*player);
        }
    }

    /*=============================================*/

    printRoundEnd();

    printLeaderBoardMessage();

    /*===== TODO: Print leaderboard entry for each player using "printLeaderBoardEntry" =====*/
    createLeaderBoard();
    /*=======================================================================================*/

    printBarrier();
}

bool MatamStory::compare(Player* player1, Player* player2){
    if(player1->getLevel() > player2->getLevel()){
        return true;
    }
    if(player1->getLevel() == player2->getLevel()){
        if(player1->getCoins() > player2->getCoins()){
            return true;
        }
        if(player1->getCoins() == player2->getCoins()){
            return player1->getName() > player2->getName();
        }
    }
    return false;
}
void MatamStory::createLeaderBoard(){
    vector<Player*> tempPlayers(players.begin(), players.end());
    int index = 1;
    sort(tempPlayers.begin(), tempPlayers.end(), compare);
    
    for(auto player : tempPlayers){
        printLeaderBoardEntry(index, *player);
        index++;
    }
    this->winner = tempPlayers[0];

}

bool MatamStory::isGameOver() {
    /*===== TODO: Implement the game over condition =====*/
    for(auto player : players){
        if(player->getLevel() == 10){
            this->iswinner = true;
            return true;
        }
        if(!player->isKOd()){
            return false;
        }
    }
    return true;
    /*===================================================*/
}

void MatamStory::play() {
    printStartMessage();
    /*===== TODO: Print start message entry for each player using "printStartPlayerEntry" V =====*/
    int index = 1;
    for(auto player : players){
        printStartPlayerEntry(index, *player);
        index++;
    }
    /*=========================================================================================*/
    printBarrier();

    while (!isGameOver()) {
        playRound();
    }

    printGameOver();
    /*===== TODO: Print either a "winner" message or "no winner" message =====*/
    if(iswinner){
        printWinner(*winner);
        return;
    }
    printNoWinners();
    /*========================================================================*/
}


