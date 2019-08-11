#pragma once
#include "abst_remedies_card.hpp"

namespace Card
{
AbstRemediesCard make_repair_card()
{
    return AbstRemediesCard("Repair", Player::PlayerStatus::Accident);
}
}  // namespace Card
