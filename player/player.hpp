#pragma once
#include <iostream>

namespace Player
{
enum PlayerStatus {
    Roll = 0,
    Stop = 1,
    Accident = 2,
    OutOfGas = 3,
    FlatTire = 4,
};
enum SafetiesKind {
    ExtraTank = 0,
    DrivingAce = 1,
    RightOfWay = 2,
    PunctureProof = 3,
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
        os << "[Error] PlayerStatus error";
        break;
    }
    return os;
}

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
        extra_tank = false;
        driving_ace = false;
        right_of_way = false;
        puncture_proof = false;
    }

    int id;
    PlayerStatus status;
    bool speed_limit_flag;

    void print_status()
    {
        std::cout << "[[Message]] player(id:" << id << ") is " << status << std::endl;
    }

    void run(const int& distance)
    {
        mile += distance;
    }

    int get_remaining()
    {
        return limit - mile;
    }

    void extend()
    {
        limit = 1300;
    }

    bool get_safeties_flag(const SafetiesKind& kind)
    {
        switch (kind) {
        case ExtraTank:
            return extra_tank;
            break;
        case DrivingAce:
            return driving_ace;
            break;
        case RightOfWay:
            return right_of_way;
            break;
        case PunctureProof:
            return puncture_proof;
            break;
        default:
            std::cerr << "[[Error]] player(id:" << id << ") has no safeties_flag Kind " << kind << std::endl;
            return false;
        }
    }


private:
    int mile;
    int limit;
    bool extra_tank;
    bool driving_ace;
    bool right_of_way;
    bool puncture_proof;
};
}  // namespace Player
