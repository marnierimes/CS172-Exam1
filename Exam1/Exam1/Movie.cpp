#include"Movie.h"

Movie::Movie()
{
	//some sort of default
	//default to comedy
}

Movie::Movie(string Title, string Genre, int ShowTime)
{
	Genre = "Comedy";
	Title = "High School Musical";
	ShowTime = 16;
}

string Movie::GetTitle()
{
	return title;
}
string Movie::GetGenre()
{
	return genre;
}
int Movie::GetShowTime()
{

}