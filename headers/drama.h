#pragma once

#include <string>
#include "movie.h"

using namespace std;

class Drama : public Movie {
 public:
  Drama(string movieTitle, int stockAmount, string directorName,
        int releaseYear);
  ~Drama();

  bool operator==(const Drama &otherMovie) const;
  bool operator!=(const Drama &otherMovie) const;
  bool operator<(const Drama &otherMovie) const;
  bool operator>(const Drama &otherMovie) const;
};