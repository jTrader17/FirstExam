//I affirm that all code given below was written solely by me, 
//Jason Trader, and that any help I received adhered to the rules stated for this exam.
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
	string title;
	string genre;
	int showTime;

public:
	Movie();
	Movie(string, string, int);
	string getTitle();
	string getGenre();
	int getShowTime();
};

#endif