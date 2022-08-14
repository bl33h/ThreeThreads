/*---------------------------------------------------------------------------
Copyright (C), 2022-2023, Sara Echeverria (bl33h)
@author Sara Echeverria
FileName: ThreeThreads
@version: I
Creation: 13/08/2022
Last modification: 13/08/2022
------------------------------------------------------------------------------*/

#include <iostream>

// Main method
int main () {
    // Variables
    int number;
    std::cout << "Introduce a value in m/s: ";
    std::cin >> number;
    return 0;

    // First thread
    uint nRepeat = 10000;
    uint nTotTime;
    double fTime;
    CpuDelaySet();
    for (uint n = 0; n < nRepeat; n++)
    {
        vD = MyFunc( vA, vB );
    }
    nTotTime = CpuDelayCalc();
    nOnce = nTotTime / nRepeat;

    // Second thread
    int distance;
    distance = nOnce*number;
    std::cout << "The value of the distance is " << distance;

    // Third thread
}