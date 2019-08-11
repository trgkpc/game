#pragma once
#include "abst_card.hpp"

namespace Card
{
struct SafetiesCard : AbstCard {
    Player::SafetiesKind kind;

    RemediesCard(const std::string& card_name, const Player::PlayerStatus& target_hazard)
        : target_hazard(target_hazard)
    {
        name = card_name;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.set_safeties_kind(kind, true);
        target.reflect_safeties_card();
    }

    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (user.id == target.id && !target.get_safeties_flag(kind)) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
