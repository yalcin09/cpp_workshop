#include <iostream>
#include <MySolver.hpp>

using namespace std;

// x_dot = dx/dt = a*x + b*u -----> continuious
//
// (x[k+1] - x[k]) / dt = a*x[k] + b*u[k];
//
// discrete form --> x[k+1] = x[k] + dt*(a*x[k] + b*u[k]);


int main(){

	///////////////////////////////////////////////////////
	// Parameters

	double dt = 0.01; // second

	double t_initial = 0.0;
	double t_final = 5.0;

	double x0 = 0.0;

	// system coefficient
	double a = -2;
	double b = 1;

	const int SIZE = (t_final - t_initial) / dt;

	// Parameters
	///////////////////////////////////////////////////////
	///////////////////////////////////////////////////////
	// system array

	double x[SIZE];	// System state array
	double u[SIZE]; // System input array

	// system array
	///////////////////////////////////////////////////////
	///////////////////////////////////////////////////////
	// input variable and initialization of state

	for(int i = 0; i < SIZE; i++)
		u[i] = 5;

	for(int i = 0; i < SIZE; i++)
		x[i] = 0;

	// assignment of initial condition
	x[0] = x0;
	
	// input variable and initialization of state
	///////////////////////////////////////////////////////
	///////////////////////////////////////////////////////
	// iteration

	for(int i = 0; i < SIZE; i++){
		x[i + 1] = x[i] + dt * (x[i] + b * u[i]); // Forward difference equation

		cout << "State : " << x[i] << "\t\tInput : " << u[i] << endl;
	}

	// iteration
	///////////////////////////////////////////////////////
	
	return 0;
}