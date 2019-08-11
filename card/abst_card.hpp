#pragma once
#include "../player/player.hpp"
#include <iostream>
#include <string>

namespace Card
{
struct AbstCard {
public:
    std::string name;

    void operator()(Player::Player& user, Player::Player& target)
    {
        if (this->check_available(user, target)) {
            exe(user, target);
        } else {
            std::cerr << "[[Error]] " << name << " card is unavailable but intended to use" << std::endl;
        }
    }

    virtual void exe(Player::Player& user, Player::Player& target) = 0;
    virtual bool check_available(const Player::Player& user, const Player::Player& target) = 0;
};
}  //namespace Card
