#pragma once
#include "customer.h"

class HashTable {
 public:
  HashTable();
  ~HashTable();

  int HashFunction(int key);
  bool Insert(int key, Customer*);
  bool Search();
  bool Remove(int key);

 private:
  int key;             // customerID
  Customer* customer;  // links to customer
  HashTableEntry(int key, Customer* customer);
};