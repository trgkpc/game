#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Roll : AbstCard {
    Roll()
    {
        name = std::string("Roll!!");
        attribute = Remedies;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Roll;
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (target.status == Player::PlayerStatus::Stop) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
