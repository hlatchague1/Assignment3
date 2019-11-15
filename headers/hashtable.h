#pragma once
#include "customer.h"

class HashTable {
 public:
  HashTable();
  ~HashTable();

  int HashFunction(int key);
  bool Insert(int key, Customer *);
  bool Search(int key);
  bool Remove(int key);

 private:
  int key;                // customerID
  Customer *customerPtr;  // links to customer
                          // void HashTableEntry(int key, Customer* customer);
};