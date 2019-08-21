#pragma once
#include "abst_card.hpp"

namespace Card
{
struct EndOfLimit : AbstCard {
    EndOfLimit()
    {
        kind = end_of_limit;
        attribute = Remedies;
        correspond_safety = nothing;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.speed_limit_flag = false;
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (target.speed_limit_flag) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
