#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double p, double i, double d) {

  previous_error = 0;
  
  p_error = 0;
  i_error = 0;
  d_error = 0;
  steer = 0;
    
  Kp = p;
  Ki = i;
  Kd = d;
}

void PID::UpdateError(double cte) {

    p_error = cte;
    i_error += cte;
    d_error = cte - previous_error;
    previous_error = cte;
    
}

double PID::TotalError() {
    
  steer = -1*(Kp * p_error + Kd * d_error + Ki * i_error);
  if(steer > 1){
    steer = 1;
  }
  if(steer< -1){
    steer= -1;
  }
  return steer;

}
