#pragma once
#include "abst_card.hpp"

namespace Card
{
struct SpeedLimit : AbstCard {
    SpeedLimit()
    {
        name = std::string("Speed Limit");
        attribute = Hazards;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.speed_limit_flag = true;
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (target.get_safeties_flag(Player::SafetiesKind::RightOfWay) == false && !target.speed_limit_flag) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
