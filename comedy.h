#pragma once

#include <string>
#include "movie.h"

using namespace std;

class Comedy : public Movie {
 public:
  Comedy(string movieTitle, int stockAmount, string directorName,
         int releaseYear);
  ~Comedy();

  bool operator==(const Comedy& otherMovie) const;
  bool operator!=(const Comedy& otherMovie) const;
  bool operator<(const Comedy& otherMovie) const;
  bool operator>(const Comedy& otherMovie) const;
  bool operator<=(const Comedy& otherMovie) const;
  bool operator>=(const Comedy& otherMovie) const;
};