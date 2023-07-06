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

	int CalcNotSameNumString(const string stringA, const string stringB)
	{
		int nGap = 0;
		int nShortSize = 0;
		if (stringA.size() >= stringB.size())
		{
			nGap = stringA.size() - stringB.size();
			nShortSize = stringB.size();
		}
		else
		{
			nGap = stringB.size() - stringA.size();
			nShortSize = stringA.size();
		}
		return MAX_POINT - (MAX_POINT * nGap / nShortSize);
	}

	int GetSize(string str)
	{
		return str.size();
	}
};