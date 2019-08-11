#pragma once
#include "abst_remedies_card.hpp"

namespace Card
{
struct Repair : AbstRemediesCard {
    Repair()
    {
        name = std::string("Repair");
        target_hazard = Player::PlayerStatus::Accident;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }
};
}  // namespace Card
