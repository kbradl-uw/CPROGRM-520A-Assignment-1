#pragma once

#include <iosfwd>

namespace HuntTheWumpus
{
    enum class Category
    {
        Wumpus,
        Pit,
        Bat,
        Hunter,
        Arrow
    };

    std::ostream& operator<<(std::ostream& out, const Category& value);
}
