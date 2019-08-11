#pragma once
#include "abst_hazard_card.hpp"

namespace Card
{
struct Stop : AbstHazardCard {
    Stop()
    {
        name = std::string("Stop");
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }

    bool safeties_flag(const Player::Player& player)
    {
        return player.right_of_way;
    }
};
}  // namespace Card
