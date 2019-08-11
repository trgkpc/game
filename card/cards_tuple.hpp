#include "card.hpp"
#include <iostream>
#include <tuple>

using Card::DistanceCard, Card::HazardCard, Card::SpeedLimit, Card::RemediesCard, Card::EndOfLimit, Card::Roll, Card::SafetiesCard;

using card_tuple = std::tuple<DistanceCard,
    DistanceCard,
    DistanceCard,
    DistanceCard,
    DistanceCard,
    HazardCard,
    HazardCard,
    HazardCard,
    SpeedLimit,
    HazardCard,
    RemediesCard,
    RemediesCard,
    RemediesCard,
    EndOfLimit,
    Roll,
    SafetiesCard,
    SafetiesCard,
    SafetiesCard,
    SafetiesCard>;

card_tuple cards = std::make_tuple(
    Card::make_25mile_card(),
    Card::make_50mile_card(),
    Card::make_75mile_card(),
    Card::make_100mile_card(),
    Card::make_200mile_card(),
    Card::make_out_of_gas_card(),
    Card::make_flat_tire_card(),
    Card::make_accident_card(),
    Card::make_speed_limit_card(),
    Card::make_stop_card(),
    Card::make_gasoline_card(),
    Card::make_spare_tire_card(),
    Card::make_repair_card(),
    Card::make_end_of_limit_card(),
    Card::make_roll_card(),
    Card::make_extra_tank_card(),
    Card::make_puncture_proof_card(),
    Card::make_driving_ace_card(),
    Card::make_right_of_way_card());
