
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
    for(int i = 0; i< eventLines.size(); i++){
        EventFactory tempEvent = EventFactory(lineToVector(eventLines[i]));
        this->events.push_back(tempEvent.create()); //maybe do tamplate? for both event & player
    }
    
    /*==========================================*/


    /*===== TODO: Open and Read players file =====*/

    /*============================================*/

    //TODO loop push back eventd by creating them with event factory

    this->m_turnIndex = 1;
}

vector<std::string>& MatamStory::lineToVector(std::string& line){
    std::string word;
    vector<std::string> eventLineVector;
    for(int i = 0; i< line.size(); i++){
        char letter = line[i];
        if(letter ==' ' || word.size() != 0){
            eventLineVector.push_back(word);
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
     * 1. Get the next event from the events list
     * 2. Print the turn details with "printTurnDetails"
     * 3. Play the event
     * 4. Print the turn outcome with "printTurnOutcome"
    */

    m_turnIndex++;
}

void MatamStory::playRound() {

    printRoundStart();

    /*===== TODO: Play a turn for each player =====*/

    /*=============================================*/

    printRoundEnd();

    printLeaderBoardMessage();

    /*===== TODO: Print leaderboard entry for each player using "printLeaderBoardEntry" =====*/

    /*=======================================================================================*/

    printBarrier();
}

bool MatamStory::isGameOver() const {
    /*===== TODO: Implement the game over condition =====*/
    return false; // Replace this line
    /*===================================================*/
}

void MatamStory::play() {
    printStartMessage();
    /*===== TODO: Print start message entry for each player using "printStartPlayerEntry" =====*/

    /*=========================================================================================*/
    printBarrier();

    while (!isGameOver()) {
        playRound();
    }

    printGameOver();
    /*===== TODO: Print either a "winner" message or "no winner" message =====*/

    /*========================================================================*/
}
