/*
 * ex03_08.cpp
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


#include <iostream>
#include "one_zero_mult.h"

int main(int argc, char **argv)
{
	int n_1 = 9;
	std::cout << "The smallest multiple of " << n_1
			  << " that contains only zeros and ones is: \n"
			  << one_zero_mult(n_1) << "\n";
	int n_2 = 99;
	std::cout << "The smallest multiple of " << n_2
			  << " that contains only zeros and ones is: \n"
			  << one_zero_mult(n_2) << "\n";
	return 0;
}

