
#include "Character.h"
#include "Player.h"

    string Character::getClassName(){
        return "Character";
    }
     
     Character::Character(){}

string Character::getDescription() const{
    return "Character::getDescription()";
}

void Character::makeDeal(Player& player, int price, int HP){
    player.payCoins(price); 
    player.heal(HP);
}
