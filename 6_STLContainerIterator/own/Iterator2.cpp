#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> vec(5, 0);
    std::iota(vec.begin(), vec.end(), 0);

    std::list<int> list(5, 0);
    std::iota(list.begin(), list.end(), 0);

    auto it = list.begin();
    std::advance(it, 2); // replacement for it+=2 if not available

    std::cout << " vec[2]=" << vec[2] << std::endl;
    std::cout << "list[2]=" << *it << std::endl;

    auto dist = std::distance(it, list.end());

    std::cout << "distance=" << dist << std::endl;

    auto prev = std::prev(it);
    auto next = std::next(it);

    std::cout << "prev=" << *prev << std::endl;
    std::cout << "next=" << *next << std::endl;

    return EXIT_SUCCESS;
}
