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
/***** Distance Card ****/
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

/***** Hazard Card ****/
HazardCard make_out_of_gas_card()
{
    return HazardCard(out_of_gas, Driver::DriverStatus::OutOfGas, Driver::SafetiesKind::ExtraTank);
}

HazardCard make_flat_tire_card()
{
    return HazardCard(flat_tire, Driver::DriverStatus::FlatTire, Driver::SafetiesKind::PunctureProof);
}

HazardCard make_accident_card()
{
    return HazardCard(accident, Driver::DriverStatus::Accident, Driver::SafetiesKind::DrivingAce);
}

SpeedLimit make_speed_limit_card()
{
    return SpeedLimit();
}

HazardCard make_stop_card()
{
    return HazardCard(stop, Driver::DriverStatus::Stop, Driver::SafetiesKind::RightOfWay);
}

/***** Remedies Card ****/
RemediesCard make_gasoline_card()
{
    return RemediesCard(gasoline, Driver::DriverStatus::OutOfGas);
}

RemediesCard make_spare_tire_card()
{
    return RemediesCard(spare_tire, Driver::DriverStatus::FlatTire);
}

RemediesCard make_repair_card()
{
    return RemediesCard(repair, Driver::DriverStatus::Accident);
}

EndOfLimit make_end_of_limit_card()
{
    return EndOfLimit();
}

Roll make_roll_card()
{
    return Roll();
}

/***** Safeties Card ****/
SafetiesCard make_extra_tank_card()
{
    return SafetiesCard(extra_tank, Driver::SafetiesKind::ExtraTank);
}

SafetiesCard make_puncture_proof_card()
{
    return SafetiesCard(puncture_proof, Driver::SafetiesKind::PunctureProof);
}

SafetiesCard make_driving_ace_card()
{
    return SafetiesCard(driving_ace, Driver::SafetiesKind::DrivingAce);
}

SafetiesCard make_right_of_way_card()
{
    return SafetiesCard(right_of_way, Driver::SafetiesKind::RightOfWay);
}
}  // namespace Card
