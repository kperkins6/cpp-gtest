#include "rando.h"
//#include <stdlib.h>


/**
 * Worry if only one child is smiling or if all children are smiling
 **/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
    if( childASmile && childBSmile && childCSmile )
        return true;
    else if( childASmile ^ childBSmile ^ childCSmile )
        return true;
    else
        return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
 **/
bool Rando::isDivisibleBy(int first, int second)
{
    if ( first == 0 && second == 0)
        throw -1; //This is the exception that we throw, exception -1
    if ( !(first % second))
        return true;
    else if (!(second % first))
        return true;
    return false;
}// 0,0  5,0 4,2 3,11  4,4 Do test cases for all of these

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
 **/
bool Rando::isPrime(int num)
{
    return true;
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
 **/
int Rando::nearestToZero(int a, int b)
{
    return 0;
}

