#pragma once
#include "abst_card.hpp"

namespace Card
{
struct SafetiesCard : AbstCard {
    Player::SafetiesKind kind;

    SafetiesCard(const std::string& card_name, const Player::SafetiesKind& kind)
        : kind(kind)
    {
        name = card_name;
        attribute = Safeties;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.set_safeties_flag(kind, true);
        target.reflect_safeties_card();
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (!target.get_safeties_flag(kind)) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
