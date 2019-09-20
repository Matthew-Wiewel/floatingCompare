#ifndef WIEWEL_FLOATING_COMPARE_H
#define WIEWEL_FLOATING_COMPARE_H
#include <cmath>

/*
	A library with functions for comparing floating point values.
	Each one has a default epsilon of 1e-6 that is "close enough"
	for equivalence between floating point values. If you wish to
	set your own precision, you can add it as the third 
	parameter to the function.
*/

//versions for double values
inline bool equalEqual(const double a, const double b, const double c = 1e-6)
{
   return fabs(a - b) < c;
}
inline bool notEqual(const double a, const double b, const double c = 1e-6)
{
   return fabs(a - b) > c;
}
inline bool lessEqual(const double a, const double b, const double c = 1e-6)
{
	return a < b || equalEqual(a,b,c);
}
inline bool greaterEqual(const double a, const double b, const double c = 1e-6)
{
	return a > b || equalEqual(a,b,c);
}

//versions for float values
inline bool equalEqual(const float a, const float b, const float c = 1e-6)
{
   return fabs(a - b) < c;
}
inline bool notEqual(const float a, const float b, const float c = 1e-6)
{
   return fabs(a - b) > c;
}
inline bool lessEqual(const float a, const float b, const float c = 1e-6)
{
	return a < b || equalEqual(a,b,c);
}
inline bool greaterEqual(const float a, const float b, const float c = 1e-6)
{
	return a > b || equalEqual(a,b,c);
}

#endif
