#pragma once

#include"Movie.h"

class Theater
{
private:
	double popcornPrice;
	double cokePrice;
public:
	Theater(string Name, string Phone);
	Theater(string Name, string Phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);

	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();
};
