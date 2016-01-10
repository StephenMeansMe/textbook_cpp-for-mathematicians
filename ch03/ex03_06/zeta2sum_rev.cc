/*
 * zeta2sum_fwd.cc
 * 
 * Copyright 2016 Stephen <me@stephenmeansme.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include "zeta2sum_rev.h"
#include <iostream>

float zeta2sum_rev(long N)
{
/**
 * Approximates zeta(2) = pi^2 / 6 by summing reciprocal squares:
 * f(N) = sum_{k=N}^1 1/k^2 <-- Note the summation is backwards
 */

	if (N < 1) {
		std::cerr << "Error: N must be a positive integer.";
		return 0.0;
	}
	
	float s = 0.0;
	float to_add;

	for (long k = N; k >= 1; k--) {
		to_add = float(1) / float(k);
		to_add = to_add * to_add;
		s += to_add;
	}
	
	return s;
}
