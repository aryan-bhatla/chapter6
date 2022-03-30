#pragma once
#include "stdafx.h"

const double PI = 3.14159265358979;

// The following functions are related to normal distributions 

// Computes the normal cumulative distribution 
double normcdf(double x);

// Computes the inverse normal distribution
double norminv(double x);

// Computes the normal cumulative distribution using Horner Functions
double normcdfHorner(double x);


// The following functions are Horner Functions of various orders. They are used to optimise polynomial evaluation

double hornerFunction(double x, double a0, double a1);

double hornerFunction(double x, double a0, double a1, double a2);

double hornerFunction(double x, double a0, double a1, double a2, double a3);

double hornerFunction(double x, double a0, double a1, double a2, double a3, double a4);

double hornerFunction(double x, double a0, double a1, double a2, double a3, double a4, double a5);

double hornerFunction(double x, double a0, double a1, double a2, double a3, double a4, double a5, double a6);

double hornerFunction(double x, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7);

double hornerFunction(double x, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8);


// Computes the Black Scholes Call and Put Price using Black Scholes Model 

double blackScholesCallPrice(double strike, double timeToMaturity, double spot, double volatility, double riskFreeRate);

double blackScholesPutPrice(double strike, double timeToMaturity, double spot, double volatility, double riskFreeRate);


// The following functions are used for circle computations 

// Computes the area of a circle given the radius 
double Area(double radius);

// Computes the circumference of a circle given the radius 
double Circumference(double radius);



// Test function 

void testMatlib();