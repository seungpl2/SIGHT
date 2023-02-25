
#include <iostream>
#include <vector>
#include <cmath>



/*** Digital implementation of a first order low pass filter ***/

std::vector<double> lowpass(std::vector<double> input)
{
    std::vector<double> output;
    double a = .04;

    for (int i=0; i<input.size(); i++)
    {
        output.push_back(((a)*input[i]) + ((1-a)*output[i]));
    }

    return output;
}
