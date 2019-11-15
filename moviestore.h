#pragma once
#include <hash_map>
#include <iostream>
#include <string>

using namespace std;

friend class Customer;

class MovieStore {
 public:
  MovieStore();

  vector<Movie> movieInventory;
  hash_map<int, Customer> customerMap;
  vector<Movie> GetMovieInventory();

  bool AddToMovies(string fileName);
  bool AddToCustomer(string fileName);
  bool AddToCommands(string fileName);
};

class Movie {
 protected:
  string movieTitle;
  int stockAmount;
  string directorName;
  int releaseYear;
  string movieStatus;

 public:
  string GetMovieTitle();
  int GetStockAmount();
  string GetDirectorName();
  int GetReleaseYear();
  string GetMovieStatus();

  void SetMovieTitle(string title);
  void SetStockAmount(int stock);
  void SetDirectorName(string director);
  void SetReleaseYear(int releaseYear);
  void SetMovieStatus(string status);
};

class Comedy : public Movie {
 public:
  Comedy();
  Comedy(string movieTitle, int stockAmount, string directorName,
         int releaseYear);
};

class Drama : public Movie {
  Drama();
  Drama(string movieTitle, int stockAmount, string directorName,
        int releaseYear);
};

class Classic : public Movie {
 private:
  string featuredActor;

 public:
  Classic(string movieTitle, int stockAmount, string directorName,
          string featuredActor, int releaseYear);
  string GetFeaturedActor();
  void SetFeaturedActor(int majorActor);
};