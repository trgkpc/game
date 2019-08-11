#pragma once
#include "abst_hazard_card.hpp"

namespace Card
{
struct Accident : AbstHazardCard {
public:
    Accident()
    {
        name = std::string("Accident");
    }

    void operator()(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Accident;
    }


    bool safeties_flag(const Player::Player& player)
    {
        return player.driving_ace;
    }
};
}  // namespace Card
