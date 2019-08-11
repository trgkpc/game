#pragma once
#include "abst_card.hpp"

namespace Card
{
struct HazardCard : AbstCard {
public:
    Player::PlayerStatus hazard;
    Player::SafetiesKind safeties;

    HazardCard(const std::string& card_name, const Player::PlayerStatus& hazard, const Player::SafetiesKind safeties)
        : hazard(hazard), safeties(safeties)
    {
        name = card_name;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.status = hazard;
    }

    bool check_available(const Player::Player& user, Player::Player& target)
    {
        if (user.id != target.id && (target.status == Player::PlayerStatus::Stop || target.status == Player::PlayerStatus::Roll) && target.status != hazard && target.get_safeties_flag(safeties) == false) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
