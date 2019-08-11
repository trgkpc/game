#pragma once
#include "abst_hazard_card.hpp"

namespace Card
{
AbstHazardCard make_accident_card()
{
    return AbstHazardCard("Accident", Player::PlayerStatus::Accident, Player::SafetiesKind::DrivingAce);
}
}  // namespace Card
