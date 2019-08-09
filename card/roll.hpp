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
};
}  // namespace Card
