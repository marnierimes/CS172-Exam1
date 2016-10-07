#include<iostream>
#include"Theater.h"
#include"Movie.h"


Theater::Theater(string Name, string Phone)
{
	//default popcorn and coke price
	genre = Movie::GetGenre();
	showTime = Movie::GetShowTime();
	popcornPrice = 5;
	cokePrice = 3;
}
void Theater::AddMovie(Movie& Movie)
{
	
}
string Theater::GetMovieForHour(int Hour)
{
	//checks if hour matches a show time
	if (Hour > 0 || Hour < 24)
	{
		showTime = Hour;
		Movie("","", showTime);
		//returns movie title
		return Movie::GetTitle();
		
	}
	//returns " " if no movies are shown at the hour given
		return " ";
}

int Theater::GetShowTimeForGenre(string Genre) const
{
	//checks if Genre matches a genre
	if(Genre == genre)
	{
		Movie::GetGenre();
		//this returns showtime
		return Movie::GetShowTime();
	}
	//returns -1 if no movies at the given genre exist
	return -1;
}
int Theater::GetPopcornPrice() const
{
	return popcornPrice;
}
int Theater::GetCokePrice() const
{
	return cokePrice;
}