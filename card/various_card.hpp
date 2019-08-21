#pragma once
#include "abst_card.hpp"
#include "distance_card.hpp"
#include "end_of_limit.hpp"
#include "hazard_card.hpp"
#include "remedies_card.hpp"
#include "roll.hpp"
#include "safeties_card.hpp"
#include "speed_limit.hpp"
#include <memory>

namespace Card
{
/***** Distance Card ****/
inline std::shared_ptr<DistanceCard> make_25mile_card()
{
    return std::make_shared<DistanceCard>(distance_25, 25);
}

inline std::shared_ptr<DistanceCard> make_50mile_card()
{
    return std::make_shared<DistanceCard>(distance_50, 50);
}

inline std::shared_ptr<DistanceCard> make_75mile_card()
{
    return std::make_shared<DistanceCard>(distance_75, 75);
}

inline std::shared_ptr<DistanceCard> make_100mile_card()
{
    return std::make_shared<DistanceCard>(distance_100, 100);
}

inline std::shared_ptr<DistanceCard> make_200mile_card()
{
    return std::make_shared<DistanceCard>(distance_200, 200);
}

/***** Hazard Card ****/
inline std::shared_ptr<HazardCard> make_out_of_gas_card()
{
    return std::make_shared<HazardCard>(out_of_gas, Driver::DriverStatus::OutOfGas, Driver::SafetiesKind::ExtraTank, extra_tank);
}

inline std::shared_ptr<HazardCard> make_flat_tire_card()
{
    return std::make_shared<HazardCard>(flat_tire, Driver::DriverStatus::FlatTire, Driver::SafetiesKind::PunctureProof, puncture_proof);
}

inline std::shared_ptr<HazardCard> make_accident_card()
{
    return std::make_shared<HazardCard>(accident, Driver::DriverStatus::Accident, Driver::SafetiesKind::DrivingAce, accident);
}

inline std::shared_ptr<SpeedLimit> make_speed_limit_card()
{
    return std::make_shared<SpeedLimit>();
}

inline std::shared_ptr<HazardCard> make_stop_card()
{
    return std::make_shared<HazardCard>(stop, Driver::DriverStatus::Stop, Driver::SafetiesKind::RightOfWay, right_of_way);
}

/***** Remedies Card ****/
inline std::shared_ptr<RemediesCard> make_gasoline_card()
{
    return std::make_shared<RemediesCard>(gasoline, Driver::DriverStatus::OutOfGas);
}

inline std::shared_ptr<RemediesCard> make_spare_tire_card()
{
    return std::make_shared<RemediesCard>(spare_tire, Driver::DriverStatus::FlatTire);
}

inline std::shared_ptr<RemediesCard> make_repair_card()
{
    return std::make_shared<RemediesCard>(repair, Driver::DriverStatus::Accident);
}

inline std::shared_ptr<EndOfLimit> make_end_of_limit_card()
{
    return std::make_shared<EndOfLimit>();
}

inline std::shared_ptr<Roll> make_roll_card()
{
    return std::make_shared<Roll>();
}

/***** Safeties Card ****/
inline std::shared_ptr<SafetiesCard> make_extra_tank_card()
{
    return std::make_shared<SafetiesCard>(extra_tank, Driver::SafetiesKind::ExtraTank);
}

inline std::shared_ptr<SafetiesCard> make_puncture_proof_card()
{
    return std::make_shared<SafetiesCard>(puncture_proof, Driver::SafetiesKind::PunctureProof);
}

inline std::shared_ptr<SafetiesCard> make_driving_ace_card()
{
    return std::make_shared<SafetiesCard>(driving_ace, Driver::SafetiesKind::DrivingAce);
}

inline std::shared_ptr<SafetiesCard> make_right_of_way_card()
{
    return std::make_shared<SafetiesCard>(right_of_way, Driver::SafetiesKind::RightOfWay);
}
}  // namespace Card
