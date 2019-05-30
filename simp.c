/*
 * simp.c Simpson's 3/8th rule
 *  Created on: May 30, 2019
 *  Author: Rajendra Adhikari
 */
double fx(double, double);
double simp(double a, double b, int n, double kd) {
  int i;
  double sum1=0.0;
  double sum2=0.0;
  double sum3=0.0;
  double h, x, val;
  h=(b-a)/(double)n;
  for(i=1;i<=n-2;i=(i+3)){
      x=a+(double)i*h;
      sum1+=fx(kd, x);
  }
  for(i=2;i<=n-1;i=(i+3)){
      x=a+(double)i*h;
      sum2+=fx(kd, x);
  }
  for(i=3;i<=n-3;i=(i+3)){
      x=a+(double)i*h;
      sum3+=fx(kd, x);
  }
  val=(3.0*h/8.0)*(fx(kd, a)+fx(kd, b)+3.0*sum1+3.0*sum2+2.0*sum3);
  return val;
}


