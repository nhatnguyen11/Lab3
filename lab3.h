#ifndef LAB3_H
#define LAB3_H

#include <stdio.h>
#include <stdlib.h>

double readWinningTime();
double calculateMetersPerSecond(const double DISTANCE, double winningTime);
double calcFeetPerSecond(double winningTime);
double calculateKillmeterPerHour(const double DISTANCE, 
double winningTime, double seconds);
double calcMilesPerHour(double winningTime, double mipm);
void displayResults(double fps, double kph, double mph, double mps);
double calcTime100Yards(double fps);
void displayTimeToRunMile(double mph);
void displayHundredYardsTime(double hundredYards);
#endif