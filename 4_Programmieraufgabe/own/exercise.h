#pragma once

#include <vector>

using Matrix = std::vector<std::vector<double>>;

void print_matrix(const Matrix &m);

std::vector<double> max_row_values(const Matrix &m);

double sort_and_max(std::vector<double> &v);
