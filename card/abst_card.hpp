#pragma once
#include "../player/player.hpp"
#include <string>

namespace Card
{
struct AbstCard {
public:
    std::string name;
    int num;

    virtual void operator()(Player::Player& player) = 0;
    virtual bool check_available(const Player::Player& owner, const Player::Player& target) = 0;
};
}  //namespace Card
