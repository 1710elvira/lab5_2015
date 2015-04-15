// task1tests.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../task1/Rational.h"

struct RationalFixture
{
	CRational defaultRational;
};


/*
  ������������ �����:
	����� ���� �� ��������� (0/1)
	����� ���� �������� �� ������ � ������� (n / 1)
*/

BOOST_FIXTURE_TEST_SUITE(Rational, RationalFixture)

BOOST_AUTO_TEST_CASE(IsEqualToZeroByDeafault)
{
	BOOST_CHECK_EQUAL(defaultRational.GetNumerator(), 0);
	BOOST_CHECK_EQUAL(defaultRational.GetDenominator(), 1);
}

BOOST_AUTO_TEST_CASE(CanBeConstructedFromInteger)
{
	{
		CRational positive(10);
		BOOST_CHECK_EQUAL(positive.GetNumerator(), 10);
		BOOST_CHECK_EQUAL(positive.GetDenominator(), 1);
	}

	{
		CRational negative(-10);
		BOOST_CHECK_EQUAL(negative.GetNumerator(), -10);
		BOOST_CHECK_EQUAL(negative.GetDenominator(), 1);
	}

	{
		CRational zero(0);
		BOOST_CHECK_EQUAL(zero.GetNumerator(), 0);
		BOOST_CHECK_EQUAL(zero.GetDenominator(), 1);
	}
}

BOOST_AUTO_TEST_SUITE_END()
