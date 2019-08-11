#pragma once
#include "abst_card.hpp"

namespace Card
{
struct AbstRemediesCard : AbstCard {
    int distance = 25;
    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (user.id == target.id && check_remaining() == true) {
            return true;
        }
        return false;
    }

    virtual bool check_target_hazard(const Player::Player& player) = 0;
};
}  // namespace Card
