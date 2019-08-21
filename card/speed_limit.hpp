#pragma once
#include "abst_card.hpp"

namespace Card
{
struct SpeedLimit : AbstCard {
    SpeedLimit()
    {
        kind = speed_limit;
        attribute = Hazards;
        correspond_safety = right_of_way;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.speed_limit_flag = true;
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (target.get_safeties_flag(Driver::SafetiesKind::RightOfWay) == false && !target.speed_limit_flag) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
