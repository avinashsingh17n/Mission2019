
// # The MIT License (MIT)
// # Copyright (c) 2017 Avinash Singh Chauhan avinashsingh17n@gmail.com

// # Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
// # associated documentation files (the "Software"), to deal in the Software without restriction, including
// # without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// # copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the
// # following conditions:
// # The above copyright notice and this permission notice shall be included in all copies or substantial
// # portions of the Software.
// # THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT
// # LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// # IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
// # WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
// # THE USE OR OTHER DEALINGS IN THE SOFTWARE.


/************************************************************/
/*  HEADER DECLARATION									    */
/************************************************************/
/************************************************************
 * @file global_function_modules.h
 *  @brief COnsists of all utility functions used across various applications
 *  @author Avinash Singh Chauhan, avinashsingh17n@gmail.com
 *  @bug unit testcases need to be added later for Improvements
 *       tested for linux environment need to be tested for windows platform.
************************************************************/
#if !defined(GLOBAL_FUNCTION_MODULES_H)
#define GLOBAL_FUNCTION_MODULES_H

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
#include <stdbool.h>

/************************************************************/
/*  GLOBAL FUNCTION PROTOTYPES								*/
/************************************************************/
void errorMsg(char *errorString);
void funcRecursBasic(int maxNum, int currentNum);
void print_fibonacci_series(int maxTerm);
int print_fibonacci_n_term(int num);
long int factorial_computation(int num);
void bubble_sort(int *inputArray, int size);
void insertion_sort(int *inputArray, int size);
int hex_to_int(char c);
int hex_to_ascii(char c, char d);

/************************************************************/
/*  GLOBAL DATATYPES/TYPEDEFs								*/
/************************************************************/
/************************************************************/
/*  GLOBAL VARIABLES										*/
/************************************************************/

/************************************************************/
/** @brief Prints the Error messageand exits from the program if
 *  encounters fatal Error
 *  @param maxNum The maximum value to print
 *  @param currentNum The starting value to print
 *  @return Void.
 */
/************************************************************/
void errorMsg(char *errorString) {
	printf("%s\n", errorString);
	exit(EXIT_FAILURE);
}

/************************************************************/
/** @brief Prints the Number from range currentNum input to
 *  maxNum using recursive technique
 *  @param maxNum The maximum value to print
 *  @param currentNum The starting value to print
 *  @return Void.
 */
/************************************************************/
void funcRecursBasic(int maxNum, int currentNum) {
	if (currentNum > maxNum) {
		return;
	}
	printf("%d\n", currentNum);
	funcRecursBasic(maxNum, currentNum + 1);
}

/************************************************************/
/** @brief Prints the Nth Term Number in Fibbo series
 *  @param num
 *  @return int result for Nth term.
 */
/************************************************************/
int print_fibonacci_n_term(int num) {
	if (0 == num){
		return 0;
	}
	else if (1 == num){
		return 1;
	} else {
		return (print_fibonacci_n_term(num - 1) + print_fibonacci_n_term(num - 2) );
	}
}

/************************************************************/
/** @brief Prints the Fibbo series upto maxN provied by user
 *  @param maxNum
 *  @param currentNum The starting value to print
 *  @return Void.
 */
/************************************************************/
void print_fibonacci_series(int maxTerm) {
	while (maxTerm >= 0) {
		int result = print_fibonacci_n_term(maxTerm);
    printf("%d\n", result);
		maxTerm--;
	}
}

/************************************************************/
/** @brief Compute the factorialof a given number
 *  @param inputNum
 *  @return long int result.
 */
/************************************************************/
long int factorial_computation(int inputNum){
	if (0 == inputNum) {
		return 0;
	}
	else if (1 == inputNum) {
		return 1;
	} else {
		return (inputNum * factorial_computation(inputNum - 1) );
	}
}

/************************************************************/
/** @brief Compute the Hexadecimal to corresponding int values
 *  of a given number
 *  @param char inputChar
 *  @return int result.
 */
/************************************************************/
int hex_to_int(char c) {
    if (c >= 97) {
      c = c - 32;
    }
    int first = c / 16 - 3;
    int second = c % 16;
    int result = first * 10 + second;
    if (result > 9) result--;
    return result;
}

/************************************************************/
/** @brief Compute the Hexadecimal to Ascii of a given number
 *  @param char inputChar
 *  @return int result.
 */
/************************************************************/
// Need to validate and cover testcases for all types of expected input
int hex_to_ascii(char c, char d) {
    int high = hex_to_int(c) * 16;
    int low = hex_to_int(d);
    return high + low;
}

/************************************************************/
/** @brief Compute the bubble sort algorithm for given array
 *  containing set of unsorted int values
 *  @param inputArray array containing unsorted integer values
 *  @param size of the array
 *  @return long int result.
 */
/************************************************************/
// Big O Complexity
// average : О(n2)
// Worst : О(n2)
// Best : О(n)
void  bubbleSort(int *inputArray, int size) {
  bool swapped = true;
  int j = 0;
  int tmp;

  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < size - j; i++) {
      if (inputArray[i] > inputArray[i + 1]){
        tmp = inputArray[i];
        inputArray[i] = inputArray[i + 1];
        inputArray[i + 1] = tmp;
        swapped = true;
      }
    }
  } // WHILE OUTER LOOP
}

/************************************************************/
/** @brief Compute the Insertion sort algorithm for given array
 *  containing set of unsorted int values
 *  @param inputArray array containing unsorted integer values
 *  @param size of the array
 *  @return long int result.
 */
/************************************************************/
// Big O Complexity
// average : О(n2)
// Worst : О(n2)
// Best : О(n)
void insertion_sort(int *inputArray, int size) {
  for (int i = 1;i < size;i++) {
    int x = inputArray[i];
    int j = i;
    while (j > 0 && inputArray[j-1] > inputArray[j]) {
      int temporaryVariable = inputArray[j];
      inputArray[j] = inputArray[j-1];
      inputArray[j-1]=temporaryVariable;
      j --;
    }
    inputArray[j] = x;
  }
}

#endif //GLOBAL_FUNCTION_MODULES_H
