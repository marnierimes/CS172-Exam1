#pragma once
#include <string>
using namespace std;

class Movie 
{
private:
	string title;
	string genre;
	static int showTime;
public:
	//non arg constructor
	Movie();
	//creates dice with default title, genre, and show time
	Movie(string Title, string Genre, int ShowTime);
	//returns movie title
	string GetTitle() const;
	//returns genre
	string GetGenre() const;
	//returns show time
	static int GetShowTime();
};

