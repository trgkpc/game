#pragma once
#include "remedies_card.hpp"

namespace Card
{
RemediesCard make_repair_card()
{
    return RemediesCard("Repair", Player::PlayerStatus::Accident);
}
}  // namespace Card
