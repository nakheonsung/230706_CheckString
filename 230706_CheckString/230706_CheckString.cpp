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

	int GetStringKind(const string str)
	{
		int result = 0;
		for (char ch = 'a'; ch <= 'z' ; ch++)
		{
			for (int strIdx=0; strIdx<str.size(); strIdx++)
			{
				if (str[strIdx] == ch)
				{
					result++;
					break;
				}
			}
		}
		return result;
	}

	bool IsInThisString(const string stringB, char ch)
	{
		for (int strIdx = 0; strIdx < stringB.size(); strIdx++)
		{
			if (stringB[strIdx] == ch)
			{
				return true;
			}
		}
		return false;
	}

	int GetStringKindAll(const string stringA, const string stringB)
	{
		int KindAll = 0;
		for (char ch = 'a'; ch <= 'z'; ch++)
		{
			int bFound = false;
			if (IsInThisString(stringA, ch))
			{
				KindAll++;
			}
			else
			{
				if (IsInThisString(stringB, ch))
				{
					KindAll++;
				}
			}
		}
		return KindAll;
	}

	int GetStringCountCompare(const string stringA, const string stringB)
	{
		int KindAll = 0;
		int SameCount = 0;
		for (char ch = 'a'; ch <= 'z'; ch++)
		{
			int bFound = false;
			if (IsInThisString(stringA, ch))
			{
				KindAll++;
				bFound = true;
			}
			if (IsInThisString(stringB, ch))
			{
				if (bFound == true)
				{
					SameCount++;
				}
				else
				{
					KindAll++;
				}
			}
		}
		return 40 * SameCount / KindAll;
	}
};