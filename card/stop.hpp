#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Stop : AbstCard {
    Stop()
    {
        name = std::string("Stop");
    }

    void operator()(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }

    bool check_available(const Player::Player& user, const Player::Player& target)
    {
        if ((user.id != target.id) && (target.status == Player::PlayerStatus::Roll) && (target.driving_ace == false)) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
