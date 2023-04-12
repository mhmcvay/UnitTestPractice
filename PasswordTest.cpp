/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, smoke_test)
{
    ASSERT_TRUE( 1 == 1 );
}
TEST(PasswordTest, single_letter_password)
{
  Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}

TEST(PasswordTest, count_lead_ab)
{
	Password TestObject;
	string word = "ab";
	ASSERT_EQ(TestObject.count_leading_characters(word), 1);
}
TEST(PasswordTest, count_lead3)
{
	Password TestObject;
	string word = "!!!hello";
	ASSERT_EQ(TestObject.count_leading_characters(word), 3);
}

TEST(PasswordTest, count_lead_classic)
{
	Password TestObject;
	string word = "Hello!";
	ASSERT_EQ(TestObject.count_leading_characters(word), 1);
}


TEST(PasswordTest, count_lead_ws)
{
	Password TestObject;
	string word = "  ";
	ASSERT_EQ(TestObject.count_leading_characters(word), 2);
}
TEST(PasswordTest, count_lead_funky_chars)
{
	Password TestObject;
	string word = "@&^mka";
	ASSERT_EQ(TestObject.count_leading_characters(word), 1);
}
