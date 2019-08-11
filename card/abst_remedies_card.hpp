#pragma once
#include "abst_card.hpp"

namespace Card
{
struct AbstRemediesCard : AbstCard {
    Player::PlayerStatus target_hazard;

    AbstRemediesCard(const std::string& card_name, const Player::PlayerStatus& target_hazard)
        : target_hazard(target_hazard)
    {
        name = card_name;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }

    bool check_target_hazard(const Player::Player& player)
    {
        return player.status == Player::PlayerStatus::Accident;
    }

    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (user.id == target.id && target.status == target_hazard) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
