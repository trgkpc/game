#pragma once
#include <array>
#include <iostream>
using std::array;

namespace Player
{
enum PlayerStatus {
    Roll = 0,
    Stop = 1,
    Accident = 2,
    OutOfGas = 3,
    FlatTire = 4,
};
using std::ostream;
ostream& operator<<(ostream& os, const PlayerStatus st)
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
        os << "[[Error]] PlayerStatus error";
        break;
    }
    return os;
}

enum SafetiesKind {
    ExtraTank = 0,
    DrivingAce = 1,
    RightOfWay = 2,
    PunctureProof = 3,
};
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

constexpr int speed_limit = 75;

struct Player {
public:
    Player(int id) : id(id)
    {
        init();
    }

    void init()
    {
        mile = 0;
        limit = 1000;
        status = Stop;
        speed_limit_flag = false;
        for (int i = 0; i < 4; i++) {
            safeties_flag.at(i) = false;
        }
    }

    int id;
    PlayerStatus status;
    bool speed_limit_flag;

    void print_status()
    {
        std::cout << "[[Message]] player id: " << id << " status: " << status << " mile: " << mile << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << "    " << static_cast<SafetiesKind>(i) << ": " << safeties_flag.at(i) << std::endl;
        }
        std::cout << "SpeedLimitFlag: " << speed_limit_flag << std::endl;
    }

    void run(const int& distance)
    {
        mile += distance;
    }

    int get_remaining()
    {
        return limit - mile;
    }

    bool can_run(const int& distance)
    {
        return (status == Roll || (status == Stop && safeties_flag.at(RightOfWay))) && mile + distance <= limit && (!speed_limit_flag || distance <= speed_limit);
    }

    void extend()
    {
        limit = 1300;
    }

    bool get_safeties_flag(const SafetiesKind& kind)
    {
        int index = static_cast<int>(kind);
        if (index >= 0 && index < 4) {
            return safeties_flag.at(index);
        } else {
            std::cerr << "[[Error]] SafetiesKind out of index" << std::endl;
            return false;
        }
    }

    void set_safeties_flag(const SafetiesKind& kind, bool flag)
    {
        int index = static_cast<int>(kind);
        if (index >= 0 && index < 4) {
            safeties_flag.at(index) = flag;
        } else {
            std::cerr << "[[Error]] SafetiesKind out of index" << std::endl;
        }
    }

    void reflect_safeties_card()
    {
        if (safeties_flag.at(ExtraTank)) {
            if (status = OutOfGas) {
                status = Stop;
            }
        }

        if (safeties_flag.at(PunctureProof)) {
            if (status == FlatTire) {
                status = Stop;
            }
        }

        if (safeties_flag.at(DrivingAce)) {
            if (status == Accident) {
                status = Stop;
            }
        }

        if (safeties_flag.at(RightOfWay)) {
            if (status == Stop) {
                status = Roll;
            }
            speed_limit_flag = false;
        }
    }

private:
    int mile;
    int limit;
    array<bool, 4> safeties_flag;
};
}  // namespace Player
