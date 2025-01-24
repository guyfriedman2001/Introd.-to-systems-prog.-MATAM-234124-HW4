#include<string>
#include <memory>
#include <iostream>
using std::string;
class Player;

#ifndef CHARACTER_H
#define CHARACTER_H
class Character {
public:
    virtual ~Character() = default;

    virtual string getClassName();
    virtual string getDescription() const;
    Character();

};
#endif //CHARACTER_H
