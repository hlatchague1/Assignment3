#include "drama.h"

Drama::Drama(string[] commandLineArray) {}

Drama::~Drama() {}

bool Drama::operator==(const Drama& otherMovie) const {
  if (otherMovie.directorName == this->directorName) {
    return true;
  }

  return false;
}

bool Drama::operator!=(const Drama& otherMovie) const {
  if (otherMovie.directorName == this->directorName) {
    return false;
  }

  return true;
}

bool Drama::operator<(const Drama& otherMovie) const {
  for (int i = 0; i < this->directorLastName.length(); i++) {
    for (int j = 0; j < otherMovie.directorLastName.length(); j++) {
      if (this->directorLastName[i] < otherMovie.directorLastName[j]) {
        return true;
      } else if (this->directorLastName[i] != otherMovie.directorLastName[j])
    }
  }
}

bool Drama::operator>(const Drama& otherMovie) const { return false; }
