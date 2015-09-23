/**
 * Unit Tests for Rando Test
 **/

#include <gtest/gtest.h>
#include "rando.h"

/*
	FUNCTIONS WE NEED TO TEST:
 
	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
 */

class RandoTest : public ::testing::Test
{
protected:
    RandoTest(){} //constructor runs before each test
    virtual ~RandoTest(){} //destructor cleans up after tests
    virtual void SetUp(){} //sets up before each test (after constructor)
    virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(RandoTest, allChildrenSmile)
{
    Rando rando;
    ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, nearestToZero)
{
    Rando rando;
    ASSERT_EQ( rando.nearestToZero(0, 1));
}


TEST(RandoTest, isPrime)
{
    Rando rando;
    ASSERT_TRUE( rando.isPrime(0));
}


TEST(RandoTest, isDivisbleBy)
{
    Rando rando;
    try{ //A try block in C++, used to try things that throw exceptions
        rando.isDivisbleBy(5, 0);
    }catch(int ex) //Catches the exceptions
    {
        if (ex ==-1) { //Looks for the exception. 0/0 should catch a try-catch. But 5, 0 would not, because 0/5 is divisible.
            exceptionthrown = true;
        }
    }
    //Even divisible by even should always be true.
}