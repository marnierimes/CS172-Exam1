#pragma once
#include<iostream>
#include<string>

class Movie 
{
public:
	Movie();
	Movie(string Title, string Genre, int ShowTime);

	string GetTitle();
	string GetGenre();
	int GetShowTime();
};

