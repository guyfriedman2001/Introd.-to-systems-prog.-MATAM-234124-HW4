
#include "MatamStory.h"
#include "Utilities.h"
#include <fstream>
#include <string>
#include <sstream>


MatamStory::MatamStory(std::istream& eventsStream, std::istream& playersStream) {

    /*===== TODO: Open and read events file =====*/

    vector<std::string> eventLineVector;
    bool emptyCheck = true;
    try{
            std::string word;
            while (eventsStream >> word) { 
            eventLineVector.push_back(word);
            emptyCheck = false;
            }
            //EventFactory tempEvent = EventFactory(lineToVector(line));
            //this->events.push_back(tempEvent.create()); 

            //not finished!!!!!!!!!!!!!!
            this->events.push_back(std::shared_ptr<Event>(EventFactory::eventFactory(lineToVector(line)))); 
        }
    catch(std::runtime_error& e){
        throw e;
    }
    if(emptyCheck || this->events.size() < 2){
        throw std::runtime_error("Invalid Events File");
    }

    // for(auto event :events){
    //     std::cout << event->getDescription() << std::endl;
    // }

    /*==========================================*/


    /*===== TODO: Open and Read players file =====*/

    /*============================================*/
    emptyCheck = true;
    try{
        while(std::getline(playersStream, line)){
            emptyCheck = false;
            this->players.push_back(std::shared_ptr<Player>(PlayerMaker::makePlayer(lineToVector(line)))); 
            //this->players.push_back(PlayerMaker::makePlayer(lineToVector(line))); 

            //this->players.push_back(PlayerMaker::makePlayer(linee[0], linee[2], linee[1])); 
        }
    }
    catch(std::runtime_error& e){
        throw e;
    }
    if(emptyCheck || (this->players.size() > 6) || (this->players.size() < 2) ){
        throw std::runtime_error("Invalid Players File");
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
   printTurnDetails(m_turnIndex, player, *events[0]);
   printTurnOutcome(events[0]->startEvent(player));
   events.push_back(std::move(events[0]));
   events.erase(events.begin());
   
   

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

bool MatamStory::compare(shared_ptr<Player> player1,shared_ptr<Player> player2){
    if(player1->getLevel() > player2->getLevel()){
        return true;
    }
    if(player1->getLevel() == player2->getLevel()){
        if(player1->getCoins() > player2->getCoins()){
            return true;
        }
        if(player1->getCoins() == player2->getCoins()){
            return player1->getName() < player2->getName();
        }
    }
    return false;
}
void MatamStory::createLeaderBoard(){
    vector<shared_ptr<Player>> tempPlayers(players.begin(), players.end());
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
    bool allKOd = true;
    for(auto player : players){
        if(player->getLevel() == 10){
            this->iswinner = true;
        }
        if(!(player->isKOd())){
            allKOd = false;
        }
    }
    if(this->iswinner || allKOd){
        return true;
    }
    return false;
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

MatamStory::~MatamStory(){}


