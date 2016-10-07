#pragma once

#include"Movie.h"

class Theater
{
private:
	int popcornPrice;
	int cokePrice;
	int showTime;
	string genre;
public:
	string name;
	string phoneNumber;
	//creates theater with given name and phone number
	Theater(string Name, string Phone);
	//adds movies with titles, genres, and show times to the theater
	static void AddMovie(Movie& Movie);
	//returns movie if it is being shown at a certain hour
	string GetMovieForHour(int Hour);
	//returns show times for movies of a certain genre
	int GetShowTimeForGenre(string Genre) const;
	//returns popcorn price
	int GetPopcornPrice() const;
	//returns coke price
	int GetCokePrice() const;
	
};
