/*
Samuel Snowden
CIS1202.501
04/28/2024
*/
#include <iostream>

using namespace std;

// Function template to return half of a floating-point value
template<typename T>
T half(T value) {
    return value / 2;
}

// Overloaded function for integer types to handle rounding
int half(int value) {
    return (value % 2 == 0) ? value / 2 : (value + 1) / 2;
}

int main() {
    // Testing with various data types
    cout << "Half of 5.5 (float): " << half(5.5f) << endl;
    cout << "Half of 6.6 (double): " << half(6.6) << endl;
    cout << "Half of 7 (int): " << half(7) << endl;
    cout << "Half of 8 (int): " << half(8) << endl;

    return 0;
}
