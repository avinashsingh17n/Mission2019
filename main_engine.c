//  The MIT License (MIT)
//  Copyright (c) 2017 Avinash Singh Chauhan avinashsingh17n@gmail.com

//  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
//  associated documentation files (the "Software"), to deal in the Software without restriction, including
//  without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the
//  following conditions:
//  The above copyright notice and this permission notice shall be included in all copies or substantial
//  portions of the Software.
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
//  LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
//  THE USE OR OTHER DEALINGS IN THE SOFTWARE.

/************************************************************
 *  @file main_engine.c
 *  @brief Consists of main loop to testand usage of various function
 *  defined in global_function_modules.h
 *  @author Avinash Singh Chauhan, avinashsingh17n@gmail.com
 *  @bug unit testcases need to be added later for Improvements
 *  tested for linux environment need to be tested for windows
 *  platform.
************************************************************/
/************************************************************/
/*  INCLUDES												*/
/************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <ctype.h>
#include <limits.h>
#include "global_function_modules.h"

/************************************************************/
/*  STATIC FUNCTION DECLARATION								*/
/************************************************************/

/************************************************************/
/*  STATIC DATATYPES / VARIABLES DECLARATION				*/
/************************************************************/

/************************************************************/
/*  GLOBAL VARIABLES DECLARATION							*/
/************************************************************/

/************************************************************/
/*  STATIC FUNCTION DEFINITION								*/
/************************************************************/

/************************************************************
 * @brief Prints the Number from range currentNum input to
 *  maxNum using recursive technique
 *  @param argc The number of command line arguements input
 *  @param argv The command line parameter supplied
 *  @return 0 for success 1 for errorcode.
 *
************************************************************/
int main(void) {

  // 01 Testing recursive basic
  //funcRecursBasic(25,11);

  //02 Testing Fibbo Series for finding Nth Term
  //int inputNum = 8;
  //print_fibonacci_n_term(inputNum);

  //03 Testing Fibbo Series to print first N Numbers
  // Improvement Print series in ascending order instead of descending forbetter readability
  //int maxNum = 20;
  //print_fibonacci_series(maxNum);

  //04 Testing factorial for Nth Number
  //int inputFactNum = 10;
  //printf("Factorial of %d is %ld \n", inputFactNum, factorial_computation(inputFactNum) );

  // 05 bubble sort
  /*int inputArray[] = {99, 56, 11, 1, 9, 0, 51, 33, 98, 1000, 12};
  unsigned int i = 0;

  bubble_sort(inputArray, sizeof(inputArray) / sizeof(int));
  printf("The sortedArray: ");

  for (i = 0; i < sizeof(inputArray) / sizeof(int); i++) {
    printf(" %d, ", inputArray[i]);
  }*/

  // 05 Insertion sort
  int inputArray[] = {99, 56, 11, 1, 9, 0, 51, 33, 98, 1000, 12};
  unsigned int i = 0;

  insertion_sort(inputArray, sizeof(inputArray) / sizeof(int));
  printf("The sortedArray: ");

  for (i = 0; i < sizeof(inputArray) / sizeof(int); i++) {
    printf(" %d, ", inputArray[i]);
  }

  return EXIT_SUCCESS;
}
