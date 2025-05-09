#pragma once

struct Calculation {

    Calculation cal(const double cal1);
};

inline Calculation Calculations(const Calculation cal) {
    return static_cast<Calculation>(cal);
}