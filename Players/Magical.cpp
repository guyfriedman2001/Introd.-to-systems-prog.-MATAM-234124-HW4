#include "Magical.h"
string Magical::getJobType(){
    return "Magical";
}
int Magical::SolarEclipseEffect(int effect){
    getBuffed(effect);
    return effect;
}