#include "Strong.h"

string Strong::getJobType(){
    return "Strong";
}
void Strong::winFight(){
    Job::takeDamage(STRONG_DAMAGE);
}