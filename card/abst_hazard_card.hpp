#pragma once
#include "abst_card.hpp"

namespace Card
{
struct AbstHazardCard : AbstCard {
public:
    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (user.id != target.id && (target.status == Player::PlayerStatus::Stop || target.status == Player::PlayerStatus::Roll) && safeties_flag(target) == false) {
            return true;
        }
        return false;
    }

    virtual bool safeties_flag(Player::Player& player) = 0;
};
}  // namespace Card
