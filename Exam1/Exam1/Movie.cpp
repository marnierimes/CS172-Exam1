#include"Movie.h"
#include<iostream>
Movie::Movie()
{
	//some sort of default
	//default to comedy
	genre = "Comedy";
	title = "High School Musical";
	showTime = 16;
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	//defaults title
	if (Title == " ")
	{
		title = "High School Musical";
	}
	//defaults genre
	if (Genre != "Comedy" && Genre != "Action" && Genre != "Horror" && Genre != "Documentary")
	{
		genre = "Comedy";
	}
	//defaults show time
	if (ShowTime < 0 || ShowTime > 24)
	{
		showTime = 0;
	}
}

string Movie::GetTitle() const
{
	return title;
}
string Movie::GetGenre() const
{
	return genre;
}
int Movie::GetShowTime()
{
	return showTime;
}
