#pragma once

#include <string>
#include <vector>
#include "transactions.h"

using namespace std;

class Customer {
 public:
  Customer();
  Customer(int id, int fName, int lName);
  ~Customer();

  int GetID();
  string GetFirstName();
  string GetLastName();
  vector<Transactions> GetHistory();

  void SetID(int ID);
  void SetFirstName(int fName);
  void SetLastName(int lName);

  bool AddToHistory();

 private:
  int customerID;
  string firstName;
  string lastName;
  vector<Transactions> history;
};