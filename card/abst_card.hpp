#pragma once
#include "../driver/driver.hpp"
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

struct AbstCard {
public:
    std::string name;
    Attribute attribute;

    void operator()(Driver::Driver& user, Driver::Driver& target)
    {
        if (check_available(user, target)) {
            if (available_this_card(user, target)) {
                exe(user, target);
            } else {
                std::cerr << "[[Error]] " << name << " card was intended to use in invalid situation" << std::endl;
            }
        } else {
            std::cerr << "[[Error]] " << name << " card was intended to use for invalid target" << std::endl;
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
