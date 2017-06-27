# PID-Steer-Control

In this project PID controller has been implemented and tuned for Udacity simulator. Along side the close loop steering controller, an open loop actuation controller has been added to make vehicle motion more stable (according to manually found unstable situation defined by a combination of cte, vehicle speed and angle). 

### Effects of P-I-D Components

Proportional Gain: reduces cross tracking error (cte) and helps the vehicle to turn back to midlane. It calculates steering proportionally to cte which causes to directly observable result.

Derivative Gain: reduces unstable effects of P gain and causes less overshoot. 

Integral Gain: in general integral gain eleminates steady-state error like parallel shift to midlane. In this project due integral term's summing effect even very small number of gain causes rapid action in steering result.

### Final Hyperparameters Choosen

Hyperparameters of this project has been tuned manually. First P-Gain has been tuned to keep vehicle in lane, later D-Gain has been tuned to reduced vehicle's unsteady behavior. And last very small number of integral has been added which doesn't effect overall characteristics but helps to reduce steady state errors after hard turns.
