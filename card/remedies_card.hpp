#pragma once
#include "abst_card.hpp"

namespace Card
{
struct RemediesCard : AbstCard {
    Driver::DriverStatus target_hazard;

    RemediesCard(const Kind& kind_, const Driver::DriverStatus& target_hazard)
        : target_hazard(target_hazard)
    {
        kind = kind_;
        attribute = Remedies;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        if (target.get_safeties_flag(Driver::SafetiesKind::RightOfWay)) {
            target.status = Driver::DriverStatus::Roll;
        } else {
            target.status = Driver::DriverStatus::Stop;
        }
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (target.status == target_hazard) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
