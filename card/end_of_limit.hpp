#pragma once
#include "abst_card.hpp"

namespace Card
{
struct EndOfLimit : AbstCard {
    EndOfLimit()
    {
        name = std::string("Speed Limit");
        attribute = Remedies;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.speed_limit_flag = false;
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (target.speed_limit_flag) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
