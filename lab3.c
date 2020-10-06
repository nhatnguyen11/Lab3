#include "lab3.h"



double readWinningTime()
{
  double winningTime = 15.00;

  printf("Please enter the winning time of the race: ");
  scanf("%lf", &winningTime);
  

  return winningTime;

}// end readWinningTime

double calculateMetersPerSecond(const double DISTANCE, double winningTime)
{
  double mps = 100.0/winningTime;
  
  
  
  return mps;
}
double calcFeetPerSecond(double winningTime)
{
  double fps  = (100.0*3.28084)/winningTime;

  
  

  return fps;
}

double calculateKillmeterPerHour(const double DISTANCE, double winningTime, double seconds)
{
  double kph  = (100.0/1000.0)/((winningTime/60.0)/60.0);
  
  
  return kph;
}

double calcMilesPerHour(double winningTime, double mipm)
{
  double mph  = (100.0*0.00062137121212121)/((winningTime/60.0)/60.0);
  
  

  return mph;
}

void displayResults(double fps, double kph, double mph, double mps)
{
  printf("The person was traveling at a rate of:\n\n");
  printf("%.2lf  meters per second.\n", mps);
  printf("%.2lf feet per second.\n", fps);
  printf("%.2lf kilometers per hour.\n", kph);
  printf("%.2lf miles per hour.\n\n", mph);

}
void displayTimeToRunMile(double mph)
{
  double mileTimeD = (1.0/mph)*60.0;
  int mileTimeI    = (1.0/mph)*60.0;
  double mileTimeS = (mileTimeD-mileTimeI)*60.0;
  printf("It would take the runner ");
  printf("%d minutes ", mileTimeI);
  printf("and ");
  printf("%.2lf seconds ", mileTimeS);
  printf("to run a mile. \n");

}


double calcTime100Yards(double fps)
{
  double Time100Yards = 300.0/fps;
  
  
  return Time100Yards;
}

void displayHundredYardsTime(double hundredYards)
{

  printf("It would take the runner ");
  printf("%.2lf seconds ", hundredYards);
  printf("to run 100 yards.");


}



  
  



 




