#include "PlayerMaker.h"
#include "Player.h"
#include <cctype>

    Player* PlayerMaker::makePlayer(vector<std::string>& characterVector)
    {
        bool check = true;
        for(const char letter : characterVector[0]){
            if(!std::isalpha(letter)){
                check = false;
            }
        }
        if((characterVector[0].length() > MAX_NAME_LEN) || !check || (characterVector[0].length() < MIN_NAME_LEN)){
             throw std::runtime_error("Invalid Players File");
        }
        Job* newjob = JobMaker::makeJob(characterVector[1]);
        try{
            Character* newcharacter = CharacterMaker::makeCharacter(characterVector[2]);
            return new Player(characterVector[0], newcharacter, newjob);
        }
        catch( std::runtime_error& e){
            delete newjob;
            throw e;
        }
    } 
