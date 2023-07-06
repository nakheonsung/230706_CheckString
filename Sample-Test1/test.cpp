#include "pch.h"
#include "../230706_CheckString/230706_CheckString.cpp"

TEST(CheckString, CheckNumString) {
	StringCheck stringcheck;
	int result = stringcheck.GetSize("asd");
	EXPECT_EQ(3, result);
}

TEST(CheckString, SameNumString) {
	StringCheck stringcheck;
	int result = stringcheck.CheckStringNum("asd", "qwe");
	EXPECT_EQ(60, result);
}

TEST(CheckString, NotSameSNumString) {
	StringCheck stringcheck;
	int result = stringcheck.CheckStringNum("asd", "qwer");
	EXPECT_EQ(45, result);
}