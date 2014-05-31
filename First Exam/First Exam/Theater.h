//I affirm that all code given below was written solely by me, 
//Jason Trader, and that any help I received adhered to the rules stated for this exam.
#include "Movie.h"
class Theater {
private:
	string name;
	string phone;
	int popcornPrice;
	int cokePrice;
	Movie movies[11];
	

public:

	Theater (string,string);

	void AddMovie (Movie&);
	string GetMovieForHour (int);
	int GetShowTimeForGenre (string);
	int GetPopcornPrice();
	int GetCokePrice();

};