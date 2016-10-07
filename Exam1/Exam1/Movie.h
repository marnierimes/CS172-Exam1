#pragma once
#include <string>
using namespace std;

class Movie 
{
private:
	string title;
	string genre;
	int showTime;
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	string GetTitle();
	string GetGenre();
	int GetShowTime();
};

