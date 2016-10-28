/*
 * main.cpp
 *
 *  Created on: Sep 1, 2016
 *      Author: jcabral
 */

#include <iostream>
#include "GPIO.h"

using namespace std;

int main()
{
   cout << "Hello World" << endl;
   auto *Port2 = GPIO<P2>::get();

   return 0;
}
