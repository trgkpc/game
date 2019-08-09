#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Roll : AbstCard {
    Roll()
    {
        name = std::string("Roll!!");
    }

    void operator()(Player::Player& player)
    {
        player.status = Player::PlayerStatus::Roll;
    }

    bool check_available(const Player::Player& owner, const Player::Player& target)
    {
        if ((owner.id == target.id) && (target.status == Player::PlayerStatus::Stop)) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
