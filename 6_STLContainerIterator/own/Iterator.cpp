#include <iostream>
#include <list>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> vec(5, 0);
    std::iota(vec.begin(), vec.end(), 0);

    std::list<int> list(5, 0);
    std::iota(list.begin(), list.end(), 0);

    // ForwardIterator
    std::vector<int>::iterator it1 = vec.begin();
    std::vector<int>::iterator it2 = vec.end();

    std::cout << "ForwardIterator:" << std::endl;
    for (auto it = it1; it != it2; ++it)
    {
        std::cout << "*it=" << *it << ", &(*it)=" << &(*it) << ", &it=" << &it << std::endl;
    }
    std::cout << std::endl;

    // ConstForwardIterator
    std::vector<int>::const_iterator it3 = vec.begin();
    std::vector<int>::const_iterator it4 = vec.end();

    std::cout << "ConstForwardIterator:" << std::endl;
    for (auto it = it3; it != it4; ++it)
    {
        std::cout << "*it=" << *it << ", &(*it)=" << &(*it) << ", &it=" << &it << std::endl;
        //*it = 10; // => forbidden
    }
    std::cout << std::endl;

    // BidirectionalIterator
    std::list<int>::reverse_iterator it5 = list.rbegin();
    std::list<int>::reverse_iterator it6 = list.rend();

    std::cout << "BidirectionalIterator:" << std::endl;
    for (auto it = it5; it != it6; ++it)
    {
        std::cout << "*it=" << *it << ", &(*it)=" << &(*it) << ", &it=" << &it << std::endl;
    }
    std::cout << std::endl;

    // ConstBidirectionalIterator
    auto it7 = list.crbegin(); // => Better to use "auto"
    auto it8 = list.crend();   // => Better to use "auto"

    std::cout << "ConstBidirectionalIterator:" << std::endl;
    for (auto it = it7; it != it8; ++it)
    {
        std::cout << "*it=" << *it << ", &(*it)=" << &(*it) << ", &it=" << &it << std::endl;
        //*it = 10; // => forbidden
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
