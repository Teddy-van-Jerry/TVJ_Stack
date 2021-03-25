/*
 * File: Sample.cpp
 * Project: TVJ_Stack
 * --------------------------
 *
 * @author: Teddy van Jerry
 * @licence: The MIT Licence
 * @compiler: at least C++/11 (tested on MSVC and MinGW)
 * @reliance: TVJ_Vector.h version 1.1
 *
 * @version 1.0 2021/03/25
 * - initial version
 *
 */

#include "TVJ_Stack.h"
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	tvj::stack<int> test;
	cout << test.size() << endl;
	test.push(12);
	cout << test.size() << endl;
	cout << test.peak() << endl; // same as top
	test.push(123);
	cout << test.pop() << endl;  // retur value unused here
	cout << test.size() << endl;
	test.clear();
	cout << test.size() << endl;
	return 0;
}

// ALL RIGHTS RESERVED (C) 2021 Teddy van Jerry