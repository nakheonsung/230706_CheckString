#include <string>
using namespace std;

class StringCheck
{
public:
	static const int MAX_POINT = 60;
	int GetSize(string str)
	{
		return str.size();
	}

	int CheckStringNum(const string stringA, const string stringB)
	{
		int ASize = stringA.size();
		int BSize = stringB.size();
		if (ASize == BSize)
		{
			return MAX_POINT;
		}
		else
		{
			int Gap = 0;
			int nShortSize = 0;
			if (ASize >= BSize)
			{
				Gap = ASize - BSize;
				nShortSize = BSize;
			}
			else
			{
				Gap = BSize - ASize;
				nShortSize = ASize;
			}
			return 60 - (60 * Gap / nShortSize);
		}
	}
};