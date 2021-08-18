#pragma once

#include <map>
#include <string>

// Pair: age, weight
using Friends = std::map<std::string, std::pair<int, int>>;

std::string get_oldest_friend(const Friends &friends);
std::string get_heaviest_friend(const Friends &friends);
