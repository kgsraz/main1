#include "IsKPeriodic.h"

bool IsKPeriodic(const std::string& str, int k) {
    if (k <= 0 || str.length() % k != 0) {
        return false;
    }

    std::string substring = str.substr(0, k);

    for (size_t i = 0; i < str.length(); i += k) {
        if (str.substr(i, k) != substring) {
            return false;
        }
    }

    return true;
}
