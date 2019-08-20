#include "abst_card.hpp"

namespace Card
{
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
using std::ostream;
ostream& operator<<(ostream& os, const Kind& kind)
{
    os << name(kind);
    return os;
}

}  //namespace Card
