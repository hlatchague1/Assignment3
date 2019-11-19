#pragma once

#include <string>

using namespace std;

class Movie {
 protected:
  string movieTitle;
  int stockAmount;
  string directorFirstName;
  string directorLastName;
  int releaseYear;
  string movieStatus;
  int totalStock;

 public:
  virtual ~Movie() = default;
  string GetMovieTitle();
  int GetStockAmount();
  string GetDirectorFirstName();
  string GetDirectorLastName();
  int GetReleaseYear();
  string GetMovieStatus();

  void SetMovieTitle(string title);
  void SetStockAmount(int stock);
  void SetDirectorFirstName(string directorFirstName);
  void SetDirectorLastName(string directorLastName);
  void SetReleaseYear(int releaseYear);
  void SetMovieStatus(string status);

  bool AddToInventory();
  bool RemovedFromInventory();

  virtual bool operator==(const Classic &otherMovie) const = 0;
  virtual bool operator!=(const Classic &otherMovie) const = 0;
  virtual bool operator<(const Classic &otherMovie) const = 0;
  virtual bool operator>(const Classic &otherMovie) const = 0;
};


// me