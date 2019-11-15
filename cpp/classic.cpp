#include "classic.h"

Classic::Classic() {}

Classic::Classic(string movieTitle, int stockAmount, string directorName,
                 string featuredActor, int releaseYear) {}

Classic::Classic(string movieTitle, int stockAmount, string directorName,
                 string featuredActor, int releaseMonth, int releaseYear) {}

Classic::~Classic() {}

string Classic::GetFeaturedActor() { return string(); }

int Classic::GetReleaseMonth() { return 0; }

void Classic::SetFeaturedActor(int majorActor) {}

void Classic::SetReleaseMonth(int releaseMonth) {}
