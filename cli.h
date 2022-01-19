#pragma once

#include <string>

using namespace std;

template<typename T>
T Input(string message)
{
    T temp;
    cout << message;
    cin >> temp;

    return temp;
}
