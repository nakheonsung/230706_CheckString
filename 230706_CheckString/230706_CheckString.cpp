#include <string>
using namespace std;

class StringCheck
{
public:
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
			return 60;
		}
	}
};