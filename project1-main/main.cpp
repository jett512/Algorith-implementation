#include <iostream>
#include <string>

#include "search.h"
#include "word_analysis.h"
#include "square_root.h"
#include "reverse_array.h"

// This main function contains some test cases from the project 
// instructions in order to help you get started with testing your code. 
// You can update or add test cases below to help you verify that 
// your code is functional. Please test and debug your code! 

// IMPORTANT NOTE:
// Test cases we are using are more numerous than the
// basic test cases provided below, and they will be used to determine
// your correctness grade. We will NOT be running this main function.
// We will run more advance tess cases, like edge cases and cases where code
// most likley to fail
// I'll povide these test cases later this week for you to test your code,
// but you need to practice finding the edge cases for each problem.
int main() {
  // TEST CASES for search.h 
  int arr_to_search[] = {1, 5, 6, 8, 9, 10, 23, 42, 59, 73, 105}; 
  int arr_to_search_length = 11;
  std::cout << "LinearSearch: ";
  std::cout << LinearSearch(arr_to_search, arr_to_search_length, 42) << std::endl;

  std::cout << "BinarySearch: ";
  std::cout << BinarySearch(arr_to_search, arr_to_search_length, 42) << std::endl;

  // TEST CASES for word_analysis.h
  std::string words[] = {"hello", "there", "beautiful"}; 
  std::cout << "MinimumWordLength: ";
  std::cout << MinimumWordLength(words, 3) << std::endl;

  std::cout << "MaximumWordLength: ";
  std::cout << MaximumWordLength(words, 3) << std::endl;

  std::cout << "RangeOfWordLengths: ";
  std::cout << RangeOfWordLengths(words, 3) << std::endl;
  
  std::cout << "WordLengthMean: ";
  std::cout << WordLengthMean(words, 3) << std::endl;

  std::cout << "WordLengthMode: ";
  std::cout << WordLengthMode(words, 3) << std::endl;

  // TEST CASES for square_root.h
  std::cout << "ApproxSqrt: ";
  std::cout << ApproxSqrt(9, 2) << std::endl;

  // TEST CASES for reverse_array.h
  int arr_to_reverse[] = {3, 4, 7, 6, 1};
  int arr_to_reverse_length = 5;
  ReverseArray(arr_to_reverse, arr_to_reverse_length);
  std::cout << "ReverseArray: [ ";
  for (int i = 0; i < arr_to_reverse_length; i++) {
    std::cout << arr_to_reverse[i] << " ";
  }
  std::cout << "]" << std::endl;
}