#pragma once
#include "../driver/driver.hpp"
#include <array>
#include <iostream>
#include <string>

namespace Card
{
enum Attribute {
    Distance = 0,
    Hazards = 1,
    Remedies = 2,
    Safeties = 3,
};
enum Kind {
    distance_200 = 0,
    distance_100 = 1,
    distance_75 = 2,
    distance_50 = 3,
    distance_25 = 4,
    out_of_gas = 5,
    flat_tire = 6,
    accident = 7,
    speed_limit = 8,
    stop = 9,
    gasoline = 10,
    spare_tire = 11,
    repair = 12,
    end_of_limit = 13,
    roll = 14,
    extra_tank = 15,
    puncture_proof = 16,
    driving_ace = 17,
    right_of_way = 18,
    extra_card = 19,
};

using std::ostream;
std::array<std::string, 20> names
    = {
        "200mile",
        "100mile",
        "75mile",
        "50mile",
        "25mile",
        "Out Of Gas",
        "Flat Tire",
        "Accident",
        "Speed Limit",
        "Stop",
        "Gasoline",
        "Spare Tire",
        "Repair",
        "End Of Limit",
        "Roll",
        "Extra Tank",
        "Puncture Proof",
        "Driving Ace",
        "Right Of Way",
        "[[Extra card]]",
};
inline std::string name(const Kind& kind)
{
    return names.at(static_cast<int>(kind));
}
ostream& operator<<(ostream& os, const Kind& kind)
{
    os << name(kind);
    return os;
}

struct AbstCard {
public:
    Kind kind;
    Attribute attribute;

    std::string get_kind()
    {
        return name(kind);
    }

    void operator()(Driver::Driver& user, Driver::Driver& target)
    {
        if (check_available(user, target)) {
            if (available_this_card(user, target)) {
                exe(user, target);
            } else {
                std::cerr << "[[Error]] " << kind << " card was intended to use in invalid situation" << std::endl;
            }
        } else {
            std::cerr << "[[Error]] " << kind << " card was intended to use for invalid target" << std::endl;
        }
    }

    bool check_available(const Driver::Driver& user, Driver::Driver& target)
    {
        if (attribute == Distance || attribute == Remedies || attribute == Safeties) {
            return (user.id == target.id);
        } else if (attribute == Hazards) {
            return (user.id != target.id);
        }
        return false;
    };

    virtual void exe(Driver::Driver& user, Driver::Driver& target) = 0;
    virtual bool available_this_card(const Driver::Driver& user, Driver::Driver& target) = 0;
};
}  //namespace Card
