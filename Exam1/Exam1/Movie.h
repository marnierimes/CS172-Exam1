#pragma once
#include <string>
using namespace std;

class Movie 
{
private:
	static string title;
	static string genre;
	static int showTime;
public:
	//non arg constructor
	Movie();
	//creates dice with default title, genre, and show time
	Movie(string Title, string Genre, int ShowTime);
	//returns movie title
	static string GetTitle();
	//returns genre
	static string GetGenre();
	//returns show time
	static int GetShowTime();
};

