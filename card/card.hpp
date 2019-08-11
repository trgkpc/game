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
DistanceCard make_25mile_card()
{
    return DistanceCard(distance_25, 25);
}

DistanceCard make_50mile_card()
{
    return DistanceCard(distance_50, 50);
}

DistanceCard make_75mile_card()
{
    return DistanceCard(distance_75, 75);
}


DistanceCard make_100mile_card()
{
    return DistanceCard(distance_100, 100);
}

DistanceCard make_200mile_card()
{
    return DistanceCard(distance_200, 200);
}

HazardCard make_accident_card()
{
    return HazardCard(accident, Driver::DriverStatus::Accident, Driver::SafetiesKind::DrivingAce);
}

RemediesCard make_repair_card()
{
    return RemediesCard(repair, Driver::DriverStatus::Accident);
}

HazardCard make_stop_card()
{
    return HazardCard(stop, Driver::DriverStatus::Stop, Driver::SafetiesKind::RightOfWay);
}

SafetiesCard make_right_of_way_card()
{
    return SafetiesCard(right_of_way, Driver::SafetiesKind::RightOfWay);
}
}  // namespace Card
