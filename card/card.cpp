#pragma once
#include "abst_card.hpp"
#include "card.hpp"
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
std::shared_ptr<AbstCard> make_card(int num)
{
    switch (num) {
    case 0:
        return std::make_shared<DistanceCard>(distance_25, 25);
        break;
    case 1:
        return std::make_shared<DistanceCard>(distance_50, 50);
        break;
    case 2:
        return std::make_shared<DistanceCard>(distance_75, 75);
        break;
    case 3:
        return std::make_shared<DistanceCard>(distance_100, 100);
        break;
    case 4:
        return std::make_shared<DistanceCard>(distance_200, 200);
        break;
    case 5:
        return std::make_shared<HazardCard>(out_of_gas, Driver::DriverStatus::OutOfGas, Driver::SafetiesKind::ExtraTank);
        break;
    case 6:
        return std::make_shared<HazardCard>(flat_tire, Driver::DriverStatus::FlatTire, Driver::SafetiesKind::PunctureProof);
        break;
    case 7:
        return std::make_shared<HazardCard>(accident, Driver::DriverStatus::Accident, Driver::SafetiesKind::DrivingAce);
        break;
    case 8:
        return std::make_shared<SpeedLimit>();
        break;
    case 9:
        return std::make_shared<HazardCard>(stop, Driver::DriverStatus::Stop, Driver::SafetiesKind::RightOfWay);
        break;
    case 10:
        return std::make_shared<RemediesCard>(gasoline, Driver::DriverStatus::OutOfGas);
        break;
    case 11:
        return std::make_shared<RemediesCard>(spare_tire, Driver::DriverStatus::FlatTire);
        break;
    case 12:
        return std::make_shared<RemediesCard>(repair, Driver::DriverStatus::Accident);
        break;
    case 13:
        return std::make_shared<EndOfLimit>();
        break;
    case 14:
        return std::make_shared<Roll>();
        break;
    case 15:
        return std::make_shared<SafetiesCard>(extra_tank, Driver::SafetiesKind::ExtraTank);
        break;
    case 16:
        return std::make_shared<SafetiesCard>(puncture_proof, Driver::SafetiesKind::PunctureProof);
        break;
    case 17:
        return std::make_shared<SafetiesCard>(driving_ace, Driver::SafetiesKind::DrivingAce);
        break;
    case 18:
        return std::make_shared<SafetiesCard>(right_of_way, Driver::SafetiesKind::RightOfWay);
        break;
    default:
        break;
    }
    return std::make_shared<AbstCard>();
}

}  // namespace Card
