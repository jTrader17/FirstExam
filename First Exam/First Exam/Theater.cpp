//I affirm that all code given below was written solely by me, 
//Jason Trader, and that any help I received adhered to the rules stated for this exam.
#include "Theater.h"

Theater::Theater (string Name, string Phone){
	name=Name;
	phone=Phone;
	popcornPrice=6;
	cokePrice=4;
}

void Theater::AddMovie (Movie& movie) {
	static int numberOfMovies=0;
	movies[numberOfMovies]=movie;
	numberOfMovies++;
}

string Theater::GetMovieForHour (int a) {
	bool found =false;
	string tempname;
	for (int q=0; q<11; q++)
	{
		if (movies[q].getShowTime()==a)
		{
			found=true;
			tempname=movies[q].getTitle();
		}
	}
	if (found==true){
		return (tempname);
	}
	else
		return ("");
}

int Theater::GetShowTimeForGenre (string a) {
	bool found=false;
	int hourneeded;
	for (int q=0; q<11; q++)
	{
		if (movies[q].getGenre()==a)
		{
			found=true;
			hourneeded=movies[q].getShowTime();
		}
	}
	if (found==true){
		return (hourneeded);
	}
	else
		return (-1);
}
	
int Theater::GetCokePrice(){
	return (cokePrice);
}

int Theater::GetPopcornPrice(){
	return (popcornPrice);
}

