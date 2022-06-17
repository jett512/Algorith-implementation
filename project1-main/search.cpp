#include<iostream>
using namespace std;

/**
PSEUDOCODE: 

algorithm LinearSearch
  Input:1, 5, 6, 8,  9, 10, 23, 42, 59, 73, 105
  Output: 7

  Your pseudocode goes here. 
	
	loop i = 0, i < length, i++
		if numbers current index equals target
			print i
	return -1 
COMMENTS:
The linear search is comprised of a single for loop with i incrementing to the length of the array.
If loop reaches the target numbers index, it then prints this index.
When the loop reaches the length of the array, that means the target was not present in the array, so -1 is returned.
*/

int LinearSearch(int numbers[], int length, int n) {
  // Implement this function.

	for(int i = 0;i < length;i++) //loops through the array of numbers
	{	
		if( numbers[i] == n)//if the current index equals n
		{
		return i;//return index to user
		}
		
	}	
	
	return -1;//n is not in the array
}

/**
PSEUDOCODE: 

algorithm BinarySearch
  Input:[1, 5, 6, 8, 9, 10, 23, 42, 59, 73, 105] 
  Output: 7

  Your pseudocode goes here.

  
  int low = 0
  int high = length - 1 

  loop from i = 0 to length
	int mid = low + (high + low/2)

	if (numbers[mid] == n)
		return mid

	else if (numbers[mid] < n)
		low = mid + 1

	else 
		high = mid - 1

	return - 1


COMMENTS:
For binary search we need to begin by creating the two pivots in the array.
Define variables high and low to set the upper and lower bound of the binary search.

For loop through the arrays index's up to the length of the array. Ensures that process is only done for elem in array
Define mid as the range between the upper and lower bound of the array.
Compare if the current mid is equal to n, if so then we have found the desired number.
Else if the crrent mid is smaller than n, then update low as one index after mid.
else the current mid is larger than n, then update high as one index before mid.

Return -1 if after going through the for loop, the number could not be found. Therefore number is not present

*/


int BinarySearch(int numbers[], int length, int n) {
  // Implement this function.


	int low = 0;//lower bound
	int high = length - 1;//upper bound

	for (int i = 0; i <= length; i++)//loop through the arrays index's up to the length of the array
	{
		
		
		int mid = low + (high - low) / 2;//range between the upper and lower bound

		if(numbers[mid] == n)//current mid is the desired number
		{
			return mid;
		}

		else if (numbers[mid] < n)//current mid is too low
		{
			low = mid + 1;//set new lower bound
			
		}

		else//current mid is too high
		{
			high = mid - 1;//set new upper bound
			
		}		
	}
	return -1;//number not present in numbers[]
}

