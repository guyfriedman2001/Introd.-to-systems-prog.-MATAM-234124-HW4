
#include "MatamStory.h"

#include "Utilities.h"
#include <fstream>

MatamStory::MatamStory(std::istream& eventsStream, std::istream& playersStream) {

    /*===== TODO: Open and read events file =====*/

    std::string line;
    vector<std::string> eventLines;
    while(std::getline(eventsStream, line)){
        eventLines.push_back(line);
    }
    // for(int i = 0; i< eventLines.size(); i++){
    //     EventFactory tempEvent = EventFactory(lineToVector(eventLines[i]));
    //     this->events.push_back(tempEvent.create()); //maybe do tamplate? for both event & player
    // }
    for(auto eventLine : eventLines){
        EventFactory tempEvent = EventFactory(lineToVector(eventLine));
        this->events.push_back(tempEvent.create()); //maybe do tamplate? for both event & player
    }

    // for(auto iter = eventLines.begin(); iter != eventLines.end(); iter++){
    //     EventFactory tempEvent = EventFactory(lineToVector(*iter));
    //     this->events.push_back(tempEvent.create()); //maybe do tamplate? for both event & player
    // }
    
    /*==========================================*/


    /*===== TODO: Open and Read players file =====*/

    /*============================================*/

    

    this->m_turnIndex = 1;
    this->iswinner = false;
    this->winner = nullptr;
}

vector<std::string>* MatamStory::lineToVector(std::string& line){
    std::string word;
    vector<std::string>* eventLineVector = new vector<std::string>;
    // for(int i = 0; i< line.size(); i++){
    //     char letter = line[i];
    //     if(letter ==' ' || word.size() != 0){
    //         eventLineVector.push_back(word);
    //         word = "";
    //     }
    //     else{
    //         word += letter;
    //     }
    // }
    
    for(int i = 0 ; line[i] != '\0'; i++){
        char letter = line[i];
        if(letter ==' ' || word.length() != 0){
            eventLineVector->push_back(word);
            word = "";
        }
        else{
            word += letter;
        }
    }
    return eventLineVector;
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
    // for(int i = 0; i < players.size(); i++){
    //     if(!players[i].isKOd()){
    //         playTurn(players[i]);
    //     }
    // }

    for(auto player : players){
        if(!player.isKOd()){
            playTurn(player);
        }
    }

    // for(auto iter = players.begin(); iter != players.end(); iter++){
    //     if(!(*iter).isKOd()){
    //         playTurn((*iter));
    //     }
    // }
    /*=============================================*/

    printRoundEnd();

    printLeaderBoardMessage();

    /*===== TODO: Print leaderboard entry for each player using "printLeaderBoardEntry" =====*/
    createLeaderBoard();
    /*=======================================================================================*/

    printBarrier();
}

bool MatamStory::compare(Player player1, Player player2){
    // if(player1.getLevel() > player2.getLevel()){
    //     return true;
    // }
    // if(player1.getLevel() == player2.getLevel()){
    //     if(player1.getCoins() > player2.getCoins()){
    //         return true;
    //     }
    //     if(player1.getCoins() == player2.getCoins()){
    //         return player1.getName() > player2.getName();
    //     }
    // }
    return false;
}
void MatamStory::createLeaderBoard(){
    vector<Player> tempPlayers(players.begin(), players.end());
    int index = 1;
    sort(tempPlayers.begin(), tempPlayers.end(), compare);
    
    for(auto player : tempPlayers){
        printLeaderBoardEntry(index, player);
    }

    // for(auto iter = tempPlayers.begin(); iter != tempPlayers.end(); iter++){
    //     printLeaderBoardEntry(index, *iter);
    // }
    // for(int i = 0; i < tempPlayers.size(); i++){
    //     printLeaderBoardEntry(i+1, players[i]);  
    // }
    this->winner = &tempPlayers[0];

}

bool MatamStory::isGameOver() {
    /*===== TODO: Implement the game over condition =====*/
    for(auto player : players){
        if(player.getLevel() == 10){
            this->iswinner = true;
            return true;
        }
        if(!player.isKOd()){
            return false;
        }
    }
    // for(auto iter = players.begin(); iter != players.end(); iter++){
    //     if(iter->getLevel() == 10){
    //         this->iswinner = true;
    //         return true;
    //     }
    //     if(!iter->isKOd()){
    //         return false;
    //     }
    // }

    // for(int i = 0; i < players.size(); i++){
    //     if(players[i].getLevel() == 10){
    //         this->iswinner = true;
    //         return true;
    //     }
    //     if(!players[i].isKOd()){
    //         return false;
    //     }
    // }
    return true;
    /*===================================================*/
}

void MatamStory::play() {
    printStartMessage();
    /*===== TODO: Print start message entry for each player using "printStartPlayerEntry" V =====*/
    int index = 1;
    for(auto player : players){
        printStartPlayerEntry(index, player);
    }

    // for(auto iter = players.begin(); iter != players.end(); iter++){
    //      printStartPlayerEntry(index, *iter);
    // }

    // for(int i = 0; i < players.size(); i++){
    //     printStartPlayerEntry((i+1), players[i]);
    // }
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


