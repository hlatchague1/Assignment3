#include "moviestore.h"

string Movie::GetMovieTitle() { return string(); }

int Movie::GetStockAmount() { return 0; }

string Movie::GetDirectorName() { return string(); }

int Movie::GetReleaseYear() { return 0; }

string Movie::GetMovieStatus() { return string(); }

void Movie::SetMovieTitle(string title) {}

void Movie::SetStockAmount(int stock) {}

void Movie::SetDirectorName(string director) {}

void Movie::SetReleaseYear(int releaseYear) {}

void Movie::SetMovieStatus(string status) {}

Classic::Classic() {}

Classic::Classic(string movieTitle, int stockAmount, string directorName,
                 string featuredActor, int releaseYear) {}

string Classic::GetFeaturedActor() { return string(); }

void Classic::SetFeaturedActor(int majorActor) {}

MovieStore::MovieStore() {}

vector<Movie> MovieStore::GetMovieInventory() { return vector<Movie>(); }

bool MovieStore::AddToMovies(string fileName) { return false; }

bool MovieStore::AddToCustomer(string fileName) { return false; }

bool MovieStore::AddToCommands(string fileName) { return false; }

Comedy::Comedy() {}

Comedy::Comedy(string movieTitle, int stockAmount, string directorName,
               int releaseYear) {}
