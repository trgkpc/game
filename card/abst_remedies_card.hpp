#pragma once
#include "abst_card.hpp"

namespace Card
{
struct AbstRemediesCard : AbstCard {
    bool check_available(const Player::Player& user, const Player::Player& target)
    {
        if (user.id == target.id && check_target_hazard(target)) {
            return true;
        }
        return false;
    }

    virtual bool check_target_hazard(const Player::Player& player) = 0;
};
}  // namespace Card
