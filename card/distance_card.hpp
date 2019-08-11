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
        attribute = Distance;
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (target.can_run(distance)) {
            return true;
        }
        return false;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.run(distance);
    }
};
}  // namespace Card
