#pragma once
#include "abst_card.hpp"

namespace Card
{
struct HazardCard : AbstCard {
public:
    Driver::DriverStatus hazard;
    Driver::SafetiesKind safeties;

    HazardCard(const Kind& kind_, const Driver::DriverStatus& hazard, const Driver::SafetiesKind safeties, const Kind& safety_)
        : hazard(hazard), safeties(safeties)
    {
        kind = kind_;
        attribute = Hazards;
        correspond_safety = safety_;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.status = hazard;
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if ((target.status == Driver::DriverStatus::Stop || target.status == Driver::DriverStatus::Roll) && target.status != hazard && target.get_safeties_flag(safeties) == false) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
