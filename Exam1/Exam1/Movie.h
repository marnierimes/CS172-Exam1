#pragma once
#include <string>
using namespace std;

class Movie 
{
private:
	string title;
	string genre;
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	string GetTitle();
	string GetGenre();
	int GetShowTime();
};

