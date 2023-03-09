# This is Jamiel's test for a notebook

# 2/15/2023 - Writing pseudocode for the microcontroller

All we did today is figure out how to receive signals in c++ and how to create a code skeleton
that receives signals and sends the signals to a handler

# 2/19/2023 - Proposal changes and doppler testing

We incorporated changes in our proposal based off the TA feedback and asked for a resubmission. 
We also got our doppler radar in and started testing 

# 2/20/2023 - Measuring frequency

We used field testing by running and walking to measure reasonable walking and running
speeds for a human being. We eventually were able to calculate what we believe the 
Doppler radar will output. 


# 2/23/2023 - Design Document

We edited our design document to include better detail with our subsystems and also
updated our block diagram

# 2/26/2023 - Doppler debugging

We set up the STM microcontroller IDE and learned how to adjust haptic sensor feedback. 
We are also debugging why our ultrasonic sensor is outputting data on the IDE but the
doppler mosdule isn't outputting reliable data

# 2/27/2023 - Peer Review

We peer reviewed team 75 and were able to observe what the TA's and professor Flifet
were looking for in a good presentation.

# 2/28/2023 - Design Review

We presented our design in the design review

# 3/1/2023

We debugged our ultrasonic and realized that the main issue had to do an 
instance of a struct used to output data

# 3/4/2023

We began our PCB design. The biggest issue we ran into was not knowing what type of
voltage regulators to use. We powered and grounded all of the modules.

# 3/4/2023

We wired all of the modules on our design, we just ran into a design issue with what parts
we can and can't use. As well has how to place through holes. 

# 3/5
We have a complementary filter that combines doppler and ultrasonic waves to output a 
distance value. We can fine tune our complementary filter by adjusting a scalar alpha. 
This scalar allows us to bias the ultrasonic and doppler intensities. At alpha = 0,
only the ultrasonic is used, at alpha = 1, only the ultrasonic is used. Every number
in between uses a combination of both. We noticed that no matter what alpha value we 
set, the ultrasonic sensor was only minimally adjusting the output intensity. 

We didn't solve this issue. 

# 3/6

I started designing the PCB for the first wave of PCB orders. The biggest
issue we ran into is how we're going to program the MCU. We realized that 
we didn't know what pins on our MCU needed to be used to program it

# 3/7
I found the 4 pins, NRST, SWDIO, SWDCLK, and GND need to not be soldered so that
we can use them to debug. I added a connector on our design so we can use it to
debug and upload code. I also ran the audit on pcbway and sent the gerber
files to the TA. 