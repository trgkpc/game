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

void gen()
{
    auto run25 = Card::make_25mile_card();
    auto run50 = Card::make_50mile_card();
    auto run75 = Card::make_75mile_card();
    auto run100 = Card::make_100mile_card();
    auto run200 = Card::make_200mile_card();
    auto out_of_gas = Card::make_out_of_gas_card();
    auto flat_tire = Card::make_flat_tire_card();
    auto accident = Card::make_accident_card();
    auto speed_limit = Card::make_speed_limit_card();
    auto stop = Card::make_stop_card();
    auto gasoline = Card::make_gasoline_card();
    auto spare_tire = Card::make_spare_tire_card();
    auto repair = Card::make_repair_card();
    auto end_of_limit = Card::make_end_of_limit_card();
    auto roll = Card::make_roll_card();
    auto extra_tank = Card::make_extra_tank_card();
    auto puncture_proof = Card::make_puncture_proof_card();
    auto driving_ace = Card::make_driving_ace_card();
    auto right_of_way = Card::make_right_of_way_card();
    cards = std::make_tuple(
        run25,
        run50,
        run75,
        run100,
        run200,
        out_of_gas,
        flat_tire,
        accident,
        speed_limit,
        stop,
        gasoline,
        spare_tire,
        repair,
        end_of_limit,
        roll,
        extra_tank,
        puncture_proof,
        driving_ace,
        right_of_way);
}

int main()
{
    gen();
}
/*
 Card::make_25mile_card() ,
 Card::make_50mile_card() ,
 Card::make_75mile_card() ,
 Card::make_100mile_card() ,
 Card::make_200mile_card() ,
 Card::make_out_of_gas_card() ,
 Card::make_flat_tire_card() ,
 Card::make_accident_card() ,
 Card::make_speed_limit_card() ,
 Card::make_stop_card() ,
 Card::make_gasoline_card() ,
 Card::make_spare_tire_card() ,
 Card::make_repair_card() ,
 Card::make_end_of_limit_card() ,
 Card::make_roll_card() ,
 Card::make_extra_tank_card() ,
 Card::make_puncture_proof_card() ,
 Card::make_driving_ace_card() ,
 Card::make_right_of_way_card() ,
 */
