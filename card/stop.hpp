#pragma once
#include "hazard_card.hpp"

namespace Card
{
HazardCard make_stop_card()
{
    return HazardCard("Stop", Player::PlayerStatus::Stop, Player::SafetiesKind::RightOfWay);
}
}  // namespace Card
