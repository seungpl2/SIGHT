
# 2/7/2023 - First Meeting with TA

Met with TA and explained our project. He also gave some logistical information and our lockers.

# 2/10/2023 - Testing Doppler and Ultrasonic Modules

Received our modules however the doppler module came damaged. We managed to hot glue the ceramic oscillator back on but still not sure if permanently damaged, probably have to order another one.

![image](~/school/ECE445/SIGHT/notebooks/John/glued_osc.jpg)

Went into the lab and hooked up both to an oscilloscope and tried to see the output signal out of both modules.

For the doppler module the signal as expected seemed really weak and noisy which indicates it requires an LNA. Testing the functionality, when walking towards the module head on at around a meter out a very weak beat signal is noticable. When sprinting towards the module head on at around a meter out a clear distinctive beat signal is produced.

![image](~/school/ECE445/SIGHT/notebooks/John/doppler_signal.jpg)

When trying to hook up the ultrasonic sensor we were not able to trigger the module even with a 10 microsecond square wave. For next time maybe using an arduino or some sort of microcontroller would be a better option then a signal generator.
