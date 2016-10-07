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
string Theater::GetMovieForHour(int Hour) const
{
	//checks if hour matches a show time
	if (Hour == showTime)
	{
		//returns movie title
		return Movie::GetTitle();
		
	}
	//returns " " if the hour doesn't match a show title
		return " ";
}

int Theater::GetShowTimeForGenre(string Genre) const
{
	//checks if Genre matches a genre
	if(Genre == genre)
	{
		//this returns showtime
		return showTime;
	}
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