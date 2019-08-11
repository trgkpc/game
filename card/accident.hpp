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

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Accident;
    }


    bool safeties_flag(Player::Player& player)
    {
        return player.get_safeties_flag(Player::SafetiesKind::DrivingAce);
    }
};
}  // namespace Card
