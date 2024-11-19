#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector< char > ret;
    for (Human& h : people) {
        h.birthday();
        if (h.isMonster())
            ret.push_back('n');
        else
            ret.push_back('y');
    }
    std::reverse(ret.begin(), ret.end());

    return ret;
}
