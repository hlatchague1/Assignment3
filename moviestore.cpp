#include "moviestore.h"
#include "movie.h"
#include <vector>

MovieStore::MovieStore()
{
}

vector<Movie> MovieStore::GetMovieInventory()
{
	return vector<Movie>();
}

bool MovieStore::ReadMovies(string fileName)
{
	return false;
}

bool MovieStore::ReadCustomers(string fileName)
{
	return false;
}

bool MovieStore::ReadCommands(string fileName)
{
	return false;
}
