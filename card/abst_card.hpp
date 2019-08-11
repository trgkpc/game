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
        if (this->check_available(user, target)) {
            exe(user, target);
        } else {
            std::cerr << "[[Error]] " << name << " card is unavailable but intended to use" << std::endl;
        }
    }

    bool check_available(const Driver::Driver& user, Driver::Driver& target)
    {
        if (attribute == Distance || attribute == Remedies || attribute == Safeties) {
            return (user.id == target.id) && available_this_card(user, target);
        } else if (attribute == Hazards) {
            return (user.id != target.id) && available_this_card(user, target);
        }
        return false;
    };

    virtual void exe(Driver::Driver& user, Driver::Driver& target) = 0;
    virtual bool available_this_card(const Driver::Driver& user, Driver::Driver& target) = 0;
};
}  //namespace Card
