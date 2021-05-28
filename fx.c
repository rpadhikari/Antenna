/*
 * fx.c Function as integrand on Half-Wave antenna
 * Created on: May 30, 2019
 * Author: Rajendra Adhikari
 * This function is from page 417, Eqn. 9.56 of book
 * of J D Jackson's Electrodynamics
 */
double pow(double,double);
double sin(double);
double cos(double);
double fabs(double);
double fx(double kd, double theta){

// factor of Z_0*I_0* I_0 / (8 * pow(pi, 2.0)) is missing on the return
//  return fabs(pow((cos(kd*cos(theta)/2.0)-cos(kd/2.0))/sin(theta),2.0)*sin(theta))*sin(theta);
  return fabs(pow((cos(kd*cos(theta)/2.0)-cos(kd/2.0))/sin(theta),2.0)*sin(theta));
}
