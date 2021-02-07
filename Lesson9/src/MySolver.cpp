/*

ax^2 + bx + c = 0
(x - x1) * (x - x2) = 0

x_dot = dx / dt

x_dot = ax ----> continuious

Matlab ----> standart solution

continuous ---> discrete

	solver(forward / backward / central - difference)

	example:

			x_dot = a*x

			(1) discretezation

				x_dot = (x[k+1] - x[k]) / dt

				x_dot = (x[k+1] - x[k]) / dt = a*x[k]

				x[k+1] = x[k] + dt*(a*x[k])  ------------> forward difference solver

*/

#include <iostream>
#include <MySolver.hpp>

