#include<iostream>
#include"Theater.h"
#include"Movie.h"


Theater::Theater(string Name, string Phone)
{
	showTime = 0;
	popcornPrice = 5;
	cokePrice = 3;
}
void Theater::AddMovie(Movie& Movie)
{
	
}
string Theater::GetMovieForHour(int Hour) 
{
	
	if (Hour == showTime);
	{
		Movie::GetShowTime();
		Movie::GetTitle();
		return title;
	}
	else
		return " ";
}

int Theater::GetShowTimeForGenre(string Genre) const
{
	if(Genre == " ")
	{
		//this returns showtime
		return showTime;
	}
	else return -1;
}
int Theater::GetPopcornPrice() const
{
	return popcornPrice;
}
int Theater::GetCokePrice() const
{
	return cokePrice;
}