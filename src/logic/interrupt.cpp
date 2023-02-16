#include <iostream>
#include <csignal>
#include <vector>
#include <queue>

using namespace std;

//queue of size 2
//Distance threshold
double period = .0002;
queue<double> Distances;
double delta; // this is used to determine speed
double curr_speed;

void handle_sigint(int sig)
{
    //check queue size
    //if less than x, push the signal
    //else push new signal and pop oldest
    //check if signal is within threshold AND distance is decreasing
            //if yes then calculate delta and speed and call haptic_intensity to determine intensity of signal
            //else don't send feedback  
}

void haptic_intensity(double speed){
    //Check if speed is less than 0
        //if so send soft feedbakc
    //check if speed is less than x
        //send stronger and stronger feedback
}

int main()
{
    signal(SIGINT, handle_sigint);

    // Your code here

    return 0;
}