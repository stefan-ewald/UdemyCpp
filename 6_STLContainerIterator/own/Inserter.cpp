#include <iostream>
#include <list>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> vec(5, 0);
    std::iota(vec.begin(), vec.end(), 0);

    std::vector<int> vec1(5, 0);
    std::iota(vec1.begin(), vec1.end(), 5);

    // Inserter (container must have implemented the insert() method)
    // Parameter:
    //      from_start      (iterator)
    //      from_end        (iterator)
    //      to              (insert_iterator)
    //          to          (container)
    //          to_start    (iterator, dynamically incremented)

    std::vector<int> vec2;

    std::copy(vec.begin(), vec.end(), std::inserter(vec2, vec2.end()));
    std::copy(vec1.begin(), vec1.end(), std::inserter(vec2, vec2.begin()));

    std::cout << "Inserter:" << std::endl;
    for (const auto &val : vec2)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    // BackInserter (container must have implemented the push_back() method)

    std::vector<int> vec3;

    std::copy(vec.begin(), vec.end(), std::back_inserter(vec3));
    std::copy(vec1.begin(), vec1.end(), std::back_inserter(vec3));

    std::cout << "BackInserter:" << std::endl;
    for (const auto &val : vec3)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    // FrontInserter (container must have implemented the push_front() method)

    std::list<int> list;

    std::copy(vec.begin(), vec.end(), std::front_inserter(list));
    std::copy(vec1.begin(), vec1.end(), std::front_inserter(list));

    std::cout << "FrontInserter:" << std::endl;
    for (const auto &val : list)
    {
        std::cout << val << std::endl;
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
