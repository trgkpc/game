#pragma once
#include "abst_card.hpp"
#include "distance_card.hpp"
#include "end_of_limit.hpp"
#include "hazard_card.hpp"
#include "remedies_card.hpp"
#include "roll.hpp"
#include "safeties_card.hpp"
#include "speed_limit.hpp"

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

SafetiesCard make_right_of_way_card()
{
    return SafetiesCard("Right Of Way", Player::SafetiesKind::RightOfWay);
}
}  // namespace Card
