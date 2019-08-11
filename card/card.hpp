#pragma once
#include "hazard_card.hpp"
#include "remedies_card.hpp"

namespace Card
{
HazardCard make_accident_card()
{
    return HazardCard("Accident", Player::PlayerStatus::Accident, Player::SafetiesKind::DrivingAce);
}

RemediesCard make_repair_card()
{
    return RemediesCard("Repair", Player::PlayerStatus::Accident);
}

HazardCard make_stop_card()
{
    return HazardCard("Stop", Player::PlayerStatus::Stop, Player::SafetiesKind::RightOfWay);
}
}  // namespace Card
