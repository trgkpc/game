#pragma once
#include "../player/player.hpp"
#include <iostream>
#include <string>

namespace Card
{
enum Attribute {
    Distance = 0,
    Hazards = 1,
    Remedies = 2,
    Safeties = 3,
};

struct AbstCard {
public:
    std::string name;
    Attribute attribute;

    void operator()(Player::Player& user, Player::Player& target)
    {
        if (this->check_available(user, target)) {
            exe(user, target);
        } else {
            std::cerr << "[[Error]] " << name << " card is unavailable but intended to use" << std::endl;
        }
    }

    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (attriute == Distance || attribute == Remedies || attribute == Safeties) {
            return (use.id == target.id) && available_this_card(user, target);
        } else if (attribute == Hazards) {
            return (user.id != target.id) && available_this_card(user, target);
        }
        return false;
    };

    virtual void exe(Player::Player& user, Player::Player& target) = 0;
    virtual bool available_this_card(const Player::Player& user, Player::Player& target) = 0;
};
}  //namespace Card
