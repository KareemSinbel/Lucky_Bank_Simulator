#include "GameInfo.h"


GameInfo::GameInfo() { };

GameInfo GameInfo::Readgameinfo(GameInfo& C)
{
	fstream infile;
	infile.open("bankofluckfiles\\GeneralGameInfo.txt");
	if (!infile)
	{
		cout << "open file failure" << endl;
	}
	else
	{
		char* pch;
		char* context = nullptr;
		const int size = 300;
		char line[size];

		while (infile.getline(line, size))
		{
			//parse the line


			pch = strtok_s(line, ",", &context);
			while (pch != nullptr)
			{
				startvalue = atoi(pch);
			    pch = strtok_s(nullptr, ",", &context);
				notesamount = atoi(pch);
			    pch = strtok_s(nullptr, ",", &context);
				leftside = atoi(pch);
				pch = strtok_s(nullptr, ",", &context);
				upside = atoi(pch);
				pch = strtok_s(nullptr, ",", &context);
				rightside = atoi(pch);
				pch = strtok_s(nullptr, ",", &context);
				downside = atoi(pch);
				pch = strtok_s(nullptr, ",", &context);
			}
		}
		infile.close();
	}
	return C;
}