#pragma once
#include "abst_card.hpp"

namespace Card
{
struct SafetiesCard : AbstCard {
    Driver::SafetiesKind safeties_kind;

    SafetiesCard(const std::string& card_name, const Driver::SafetiesKind& safeties_kind)
        : safeties_kind(safeties_kind)
    {
        name = card_name;
        attribute = Safeties;
    }

    void exe(Driver::Driver& user, Driver::Driver& target)
    {
        target.set_safeties_flag(safeties_kind, true);
        target.reflect_safeties_card();
    }

    bool available_this_card(const Driver::Driver& user, Driver::Driver& target)
    {
        if (!target.get_safeties_flag(safeties_kind)) {
            return true;
        }
        return false;
    }
};
}  // namespace Card
