/*
 * main.c
 *  Created on: May 30, 2019
 *      Author: Rajendra Adhikari
 *      Calculation of radiated power per unit solid angle
 */

#include<stdio.h>
#include<math.h>

FILE *fout;

int main() {
	// simp (double a, double b, int n, double kd)
//  double sim(double, double, int, double); // Simpson's 3/8th function
  double fx(double, double); // radiation pattern function
  double theta;        // angle variable
 // double power;        // radiation power
  int i, n=180;
  double d=14.10;      // length of antenna in meter
  double Z_0=377.0;    // Impedance of free space
  double I_0=1.0;      // peak current of antenna
  double pi=M_PI;      // constant pi
//  double a=0.0, b=pi;
  double k=0.0418879020478639;  // wave vector w/c, corresponds to 20 MHz
  double kd = k*d;     // product of k and d
  double fact=Z_0*I_0*I_0/(8*pow(pi,2.0));
  fout=fopen("out.dat","w");
  fprintf(fout,"# Theta             Power\n");
  for (i=1; i< n; i++) {
	  theta=(double) i *pi/180.0;
	  fprintf(fout, "%lf \t %lf\n", (double) i, fact*fx(kd,theta));
	  printf("%lf \t %lf\n", (double) i, fact*fx(kd,theta));
  }
  fclose(fout);

}
