#pragma once

#include <string>
#include "movie.h"

using namespace std;

class Classic : public Movie {
 private:
  string featuredActor;
  int releaseMonth;

 public:
  Classic(string movieTitle, int stockAmount, string directorName,
          string featuredActor, int releaseMonth, int releaseYear);
  ~Classic();

  string GetFeaturedActor();
  int GetReleaseMonth();

  void SetFeaturedActor(int majorActor);
  void SetReleaseMonth(int releaseMonth);

  bool operator==(const Classic& otherMovie) const;
  bool operator!=(const Classic& otherMovie) const;
  bool operator<(const Classic& otherMovie) const;
  bool operator>(const Classic& otherMovie) const;
  bool operator<=(const Classic& otherMovie) const;
  bool operator>=(const Classic& otherMovie) const;
};