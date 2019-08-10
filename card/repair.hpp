#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Repair : AbstCard {
    Repair()
    {
        name = std::string("Repair");
    }

    void operator()(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Stop;
    }

    bool check_available(const Player::Player& user, const Player::Player& target)
    {
        if (user.id == target.id && (target.status == Player::PlayerStatus::Accident)) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
