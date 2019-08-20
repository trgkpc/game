#include "../driver/driver.hpp"
#include "no_cmake_list.hpp"
#include <iostream>
using namespace std;

int main()
{
    using namespace Driver;
    ::Driver::Driver d1(1);

    for (int i = 0; i < 5; i++) {
        auto k = static_cast<SafetiesKind>(i);
        cout << "i: " << i << " SafetiesKind: " << k << " flag: " << d1.get_safeties_flag(k) << endl;
    }

    d1.set_safeties_flag(RightOfWay, true);

    for (int i = 0; i < 5; i++) {
        auto k = static_cast<SafetiesKind>(i);
        cout << "i: " << i << " SafetiesKind: " << k << " flag: " << d1.get_safeties_flag(k) << endl;
    }
}
