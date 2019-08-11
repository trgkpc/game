#pragma once
#include "abst_card.hpp"

namespace Card
{
struct Roll : AbstCard {
    Roll()
    {
        name = std::string("Roll!!");
        attribute = Remedies;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.status = Driver::DriverStatus::Roll;
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (target.status == Driver::DriverStatus::Stop) {
            return true;
        } else {
            return false;
        }
    }
};
}  // namespace Card
