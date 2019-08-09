#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Stop : AbstCard {
    Stop()
    {
        name = std::string("Stop");
    }

    void operator()(Player::Player& player)
    {
        player.status = Player::PlayerStatus::Stop;
    }

    bool check_available(const Player::Player& owner, const Player::Player& target)
    {
        if ((owner.id == target.id) && (target.status == Player::PlayerStatus::Roll)) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
