#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Roll : AbstCard {
    Roll()
    {
        name = std::string("Roll!!");
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Roll;
    }

    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if ((user.id == target.id) && (target.status == Player::PlayerStatus::Stop)) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
