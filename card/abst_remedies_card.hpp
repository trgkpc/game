#pragma once
#include "abst_card.hpp"

namespace Card
{
struct AbstRemediesCard : AbstCard {
    Player::Player& target_hazard;

    bool check_available(const Player::Player& user, const Player::Player& target)
    {
        if (user.id == target.id && (target.status == target_hazard)) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
