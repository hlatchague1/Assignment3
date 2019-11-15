#pragma once

#include <hashtable.h>
#include <iostream>
#include <string>
#include "transactions.h"

using namespace std;

friend class Customer;

class MovieStore {
 public:
  MovieStore();

  vector<Movie> movieInventory;
  HashTable<int, Customer> customerList;
  vector<Movie> GetMovieInventory();

  bool ReadMovies(string fileName);
  bool ReadCustomers(string fileName);
  bool ReadCommands(string fileName);
};
