//
//Marnie Rimes
//10-06-16
//CS 172 Exam 1
//
// I affirm that all code given below was written solely by me, Marnie Rimes,
// and that any help I received adhered to the rules stated for this exam


#include<iostream>
#include"Movie.h"
#include"Theater.h"

using namespace std;

int main()
{
	const int MOVIECOUNT = 11;
	Movie movieListing[] =
	{
		Movie("Bull Durham", "Comedy", 0), Movie("Ocean's Eleven", "Action", 2),
		Movie("Monte Python's Meaning of Life", "Comedy", 5), Movie("Jaws", "Horror", 7),
		Movie("Fletch", "Comedy", 10), Movie("Usual Suspects", "Action", 12),
		Movie("Bull Durham", "Comedy", 14), Movie("Ocean's Eleven", "Action", 16),
		Movie("Monte Python's Meaning of Life", "Comedy", 19),Movie("Jaws", "Horror", 21),
		Movie("Usual Suspects", "Action", 23),
	};

	Theater garland("The Garland", "509-327-2509");
	for (int m = 0; m < MOVIECOUNT; m++)
	{
		garland.AddMovie(movieListing[m]);
	}
	int errors = 0;
	//finish adding in main code

}