#pragma once
#include "abst_remedies_card.hpp"

namespace Card
{
struct Repair : AbstRemediesCard {
    Repair()
    {
        name = std::string("Repair");
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }

    bool check_target_hazard(const Player::Player& player)
    {
        return player.status == Player::PlayerStatus::Accident;
    }
};
}  // namespace Card
