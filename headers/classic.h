#pragma once

#include <string>
#include <vector>
#include "movie.h"

using namespace std;

class Classic : public Movie {
 private:
  string featuredActorFirstName;
  string featuredActorLastName;
  int releaseMonth;
  vector<pair<string, string>> actorsInMovie;

 public:
  Classic(string movieTitle, int stockAmount, string directorName,
          string featuredActorFirstName, string featuredActorLastName,
          int releaseMonth, int releaseYear);
  ~Classic();

  string GetFeaturedActorFirstName();
  string GetFeaturedActorLastName();
  int GetReleaseMonth();

  void SetFeaturedActorFirstName(string actorFirstName);
  void SetFeaturedActorLastName(string actorLastName);
  void SetReleaseMonth(int releaseMonth);

  bool operator==(const Classic &otherMovie) const;
  bool operator!=(const Classic &otherMovie) const;
  bool operator<(const Classic &otherMovie) const;
  bool operator>(const Classic &otherMovie) const;
};