#pragma once
#include "abst_card.hpp"

namespace Card
{
struct HazardCard : AbstCard {
public:
    Driver::DriverStatus hazard;
    Driver::SafetiesKind safeties;

    HazardCard(const Kind& kind, const Driver::DriverStatus& hazard, const Driver::SafetiesKind safeties)
        : kind(kind), hazard(hazard), safeties(safeties)
    {
        attribute = Hazards;
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
