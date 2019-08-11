#pragma once
#include "hazard_card.hpp"

namespace Card
{
HazardCard make_accident_card()
{
    return HazardCard("Accident", Player::PlayerStatus::Accident, Player::SafetiesKind::DrivingAce);
}
}  // namespace Card
