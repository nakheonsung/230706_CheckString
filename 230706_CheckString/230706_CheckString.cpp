#include <string>
using namespace std;

class StringCheck
{
public:
	static const int MAX_POINT = 60;

	int CheckStringNum(const string stringA, const string stringB)
	{
		if (stringA.size() == stringB.size())
		{
			return MAX_POINT;
		}
		return CalcNotSameNumString(stringA, stringB);
	}

	bool isDoubleLength(int nShortSize, int nLongSize)
	{
		if (nLongSize >= (nShortSize * 2))
		{
			return true;
		}
		return false;
	}

	int CalcFromGap(int nGap, int nShortSize)
	{
		return MAX_POINT - (MAX_POINT * nGap / nShortSize);
	}

	int CalcNotSameNumString(const string stringA, const string stringB)
	{
		int nGap = 0;
		int nShortSize = 0;
		int nLongSize = 0;
		if (stringA.size() >= stringB.size())
		{
			nGap = stringA.size() - stringB.size();
			nShortSize = stringB.size();
			nLongSize = stringA.size();
		}
		else
		{
			nGap = stringB.size() - stringA.size();
			nShortSize = stringA.size();
			nLongSize = stringB.size();
		}

		if (isDoubleLength(nShortSize, nLongSize)) return 0;
		return CalcFromGap(nGap, nShortSize);
	}

	int GetSize(string str)
	{
		return str.size();
	}
};