#include <iostream>

using std::cout, std::endl;

enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    double velocity;
    Lane lane;
};

void printVehicleData(Vehicle &v)
{
    cout << "Vehicle ID: " << v.id << endl;
    cout << "Vehicle velocity: " << v.velocity << endl;
    //cout << "Vehicle lane: " << v.lane << endl;
    switch (v.lane)
    {
    case Lane::CENTER_LANE:
    {
        cout << "Vehicle lane: center lane" << endl;
        break;
    }
    case Lane::LEFT_LANE:
    {
        cout << "Vehicle lane: left lane" << endl;
        break;
    }
    case Lane::RIGHT_LANE:
    {
        cout << "Vehicle lane: right lane" << endl;
        break;
    }
    }
}

int main()
{
    Vehicle v1{1, 100.0f, Lane::CENTER_LANE};

    // designated struct initializer ab c++20 bzw. c++2a
    Vehicle v2{.id = 2, .velocity = 200.0f, .lane = Lane::LEFT_LANE};

    Vehicle array[] {v1, v2};
    for (auto v: array) {
        printVehicleData(v);
    }

    return EXIT_SUCCESS;
}
