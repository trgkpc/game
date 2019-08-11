#pragma once
#include "abst_card.hpp"

namespace Card
{
struct DistanceCard : AbstCard {
    int distance;
    DistanceCard(const std::string& card_name, const int distance)
        : distance(distance)
    {
        name = card_name;
    }

    bool available_this_card(const Player::Player& user, Player::Player& target)
    {
        if (target.can_run(distance)) {
            return true;
        }
        return false;
    }

    void exe(Player::Player& user, Player::Player& target)
    {
        target.run(distance);
    }
};
}  // namespace Card
