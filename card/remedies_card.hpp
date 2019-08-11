#pragma once
#include "abst_card.hpp"

namespace Card
{
struct RemediesCard : AbstCard {
    Player::PlayerStatus target_hazard;

    RemediesCard(const std::string& card_name, const Player::PlayerStatus& target_hazard)
        : target_hazard(target_hazard)
    {
        name = card_name;
        attribute = Remedies;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        if (target.get_safeties_flag(Player::SafetiesKind::RightOfWay)) {
            target.status = Player::PlayerStatus::Roll;
        } else {
            target.status = Player::PlayerStatus::Stop;
        }
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (target.status == target_hazard) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
