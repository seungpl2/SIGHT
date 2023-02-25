
#include <iostream>
#include <vector>
#include <cmath>



bool complementary_filter(std::vector<double> doppler, std::vector<double> ultrasonic, std::vector<double>& distance)
{
    bool flag = false;
    const double a = .02;
    const double T_s = .000013;

    if (distance.size() == doppler.size() && distance.size() == ultrasonic.size())
    {
        for (int n=1; n<distance.size(); n++)
        {
            distance[n] = (a*ultrasonic[n]) + ((1-a)*(distance[n-1] + (T_s*doppler[n])));
        }

        flag = true;
    }

    return flag;
}


int main()
{
    std::vector<double> doppler_{2.25, 4.14, 15.002, 8.314, 3.112, 2.4, 5.51, 10.42, 14.16, 8.18};
    std::vector<double> ultrasonic_{4.24, 3.244, 5.143, 6.572, 8.331, 7.245, 4.247, 6.339, 2.975, .145};
    std::vector<double> distance_(10);

    if (complementary_filter(doppler_, ultrasonic_, distance_))
    {
        for (auto& itr : distance_)
        {
            std::cout << "Distance: " << itr << std::endl;
        }
    }
    else
    {
        std::cout << "The complementary filter failed to calculate the output distance!" << std::endl;
    }

}
