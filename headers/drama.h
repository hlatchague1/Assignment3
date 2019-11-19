#pragma once

#include <string>
#include "movie.h"

using namespace std;

class Drama : public Movie {
 public:
  Drama(string[] commandLineArray);
  ~Drama();

  bool operator==(const Drama &otherMovie) const;
  bool operator!=(const Drama &otherMovie) const;
  bool operator<(const Drama &otherMovie) const;
  bool operator>(const Drama &otherMovie) const;
};