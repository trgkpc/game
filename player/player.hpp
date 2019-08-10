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
        status = Stop;
        speed_limit_flag = false;
        extra_tank = false;
        driving_ace = false;
        right_of_way = false;
        puncture_proof = false;
    }

    int mile;
    int id;
    PlayerStatus status;
    bool speed_limit_flag;

    void print_status()
    {
        std::cout << "player id:" << id << " is " << status << std::endl;
    }

    bool extra_tank;
    bool driving_ace;
    bool right_of_way;
    bool puncture_proof;
};
}  // namespace Player
