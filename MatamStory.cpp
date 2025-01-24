
#include "MatamStory.h"
#include "Utilities.h"
#include <fstream>
#include <string>
#include <sstream>


MatamStory::MatamStory(std::istream& eventsStream, std::istream& playersStream) {
    try{
        vector<std::string> eventLineVector = fileToVector(eventsStream);
        for(auto event = eventLineVector.begin() ; event < eventLineVector.end(); event++){
            events.push_back(EventFactory::create(event));
        } 
        if(this->events.size() < 2){
            throw std::runtime_error("Invalid Events File");
        } 
    }
    catch(std::runtime_error& e){
        throw e;
    }
    /*==========================================*/
    try{
        vector<std::string> playerLineVector = fileToVector(playersStream);
        for(auto player = playerLineVector.begin() ; player < playerLineVector.end(); player+=3){
            auto end = player + 3;
            vector<std::string> playerstring(player, end);
            this->players.push_back(std::shared_ptr<Player>(PlayerMaker::makePlayer(playerstring))); 
        }
        if((this->players.size() > 6) || (this->players.size() < 2)){
            throw std::runtime_error("Invalid Players File");
        }
    }
    catch(std::runtime_error& e){
        throw e;
    }
    /*============================================*/

    this->m_turnIndex = 1;
    this->iswinner = false;
    this->winner = nullptr;
}

vector<std::string> MatamStory::fileToVector(std::istream& file){
    vector<std::string> fileVector;
    std::string word;
    while (file >> word) { 
        fileVector.push_back(word);
    }
    return fileVector;
}

void MatamStory::playTurn(Player& player) {
   printTurnDetails(m_turnIndex, player, *events[0]);
   printTurnOutcome(events[0]->startEvent(player));
   events.push_back(std::move(events[0]));
   events.erase(events.begin());

    m_turnIndex++;
}

void MatamStory::playRound() {

    printRoundStart();

    for(auto player : players){
        if(!player->isKOd()){
            playTurn(*player);
        }
    }
    /*=============================================*/

    printRoundEnd();

    printLeaderBoardMessage();

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

    if(iswinner){
        printWinner(*winner);
        return;
    }
    printNoWinners();
    /*========================================================================*/
}

MatamStory::~MatamStory(){}


