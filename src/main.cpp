//******************************************************************************
// File name:   main.cpp
// Author:      CS, Pacific University
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************

#include <iostream>
#include <vector>
#include <random>

void fill (std::vector<int>& rcVec, size_t size, unsigned int upper);
void print (const std::vector<int>& rcVec);

int main () {
  // std::vector<int> cVec (5);
  std::vector<int> cVec;

  srand (0);

  std::cout << std::endl;
  std::cout << "Uninitialized Vector: ";
  print (cVec);
  std::cout << std::endl << std::endl;
  std::cout << "cVec Capacity: " << cVec.capacity () << std::endl;
  std::cout << "cVec Size: " << cVec.size () << std::endl << std::endl;

  fill (cVec, 5, 10);
  std::cout << "Filled Vector: ";
  print (cVec);
  std::cout << std::endl << std::endl;
  std::cout << "cVec Capacity: " << cVec.capacity () << std::endl;
  std::cout << "cVec Size: " << cVec.size () << std::endl;

  cVec.clear ();
  if (cVec.empty ()) {
    std::cout << "Vector is empty!";
  }
  std::cout << std::endl << std::endl;
  std::cout << "cVec Capacity: " << cVec.capacity () << std::endl;
  std::cout << "cVec Size: " << cVec.size () << std::endl << std::endl;

  return EXIT_SUCCESS;
}

void print (const std::vector<int>& rcVec) {
  for (int i = 0; i < rcVec.size (); i++) {
    std::cout << rcVec[i] << " ";
  }
}

void fill (std::vector<int>& rcVec, size_t size, unsigned int upper) {
  for (size_t i = 0; i < size; i++) {
    rcVec.push_back (rand () % upper);
  }
}