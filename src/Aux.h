/*
 * aux.h
 * Andreas B�lling, 2012
 */

#ifndef AUX_H_
#define AUX_H_

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void print2DArray(double **f, int ni, int nj);
void write2DArray(double **a, string file, int nx, int ny);
double poiseuilleVelocity(int x, int n1, int n2, double uMax);

#endif /* AUX_H_ */