#pragma once
#include "../player/player.hpp"
#include <string>

namespace Card
{
struct AbstCard {
public:
    std::string name;

    virtual void operator()(Player::Player& user, Player::Player& target) = 0;
    virtual bool check_available(const Player::Player& user, const Player::Player& target) = 0;
};
}  //namespace Card
