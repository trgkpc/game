#pragma once
#include "driver.hpp"
using std::array;

namespace Driver
{
using std::ostream;
ostream& operator<<(ostream& os, const DriverStatus st)
{
    switch (st) {
    case Roll:
        os << "Roll!!";
        break;
    case Stop:
        os << "no Roll";
        break;
    case Accident:
        os << "Accident";
        break;
    case OutOfGas:
        os << "Out Of Gas";
        break;
    case FlatTire:
        os << "Flat Tire";
        break;
    default:
        os << "[[Error]] DriverStatus error";
        break;
    }
    return os;
}

ostream& operator<<(ostream& os, const SafetiesKind& kind)
{
    switch (kind) {
    case ExtraTank:
        os << "Extra Tank";
        break;
    case DrivingAce:
        os << "Driving Ace";
        break;
    case RightOfWay:
        os << "Right of Way";
        break;
    case PunctureProof:
        os << "Puncture Proof";
        break;
    default:
        os << "[[Error]] SafetiesKind not exit";
        break;
    }
    return os;
}

}  // namespace Driver
