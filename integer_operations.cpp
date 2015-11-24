#include "stdafx.h"
#include "integer_operations.h"
#include <math.h>

int max_int(int d, int e, int f) {
	
	int w = fmax(d, e);

	return fmax(w, f);
}

int min_int(int g, int h, int i) {

	int q = fmin(g, h);

	return fmin(q, i);
}

int sum_int(int a, int b, int c) {

	return a + b + c;
}
