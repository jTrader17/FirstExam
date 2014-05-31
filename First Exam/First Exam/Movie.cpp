//I affirm that all code given below was written solely by me, 
//Jason Trader, and that any help I received adhered to the rules stated for this exam.
#include "Movie.h"

Movie::Movie()
{
	showTime=145;
	title="Braveheart";
	genre="Action";
}

Movie::Movie(string Title, string Genre, int ShowTime){
	title=Title;
	if (Genre=="Action" ||Genre=="Comedy" ||Genre=="Horror" ||Genre=="Documentary")
		genre=Genre;
	else
		genre="Comedy";
	showTime=ShowTime;
}

string Movie::getTitle(){
	return (title);
}

string Movie::getGenre(){
	return (genre);
}

int Movie::getShowTime(){
	return (showTime);
}
