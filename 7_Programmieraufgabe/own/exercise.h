#pragma once

#include <vector>

using BinaryArray = std::vector<bool>;

BinaryArray shuffle_till_equal(const BinaryArray &target, const BinaryArray &input);
BinaryArray smart_shuffle_till_equal(const BinaryArray &target, const BinaryArray &input);
