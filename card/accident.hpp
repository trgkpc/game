#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Accident : AbstCard {
    Accident()
    {
        name = std::string("Accident");
    }

    void operator()(Player::Player& user, Player::Player& target)
    {
        target.status = Player::PlayerStatus::Accident;
    }

    bool check_available(const Player::Player& user, const Player::Player& target)
    {
        if (user.id != target.id && (target.status == Player::PlayerStatus::Stop || target.status == Player::PlayerStatus::Roll) && target.driving_ace == false) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
