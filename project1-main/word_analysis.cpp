#include <string>
#include <iostream>
#include "word_analysis.h"
using namespace std;


/**
PSEUDOCODE: 

algorithm MinimumWordLength
  Input: Jett is the best at algeba 
  Output: 2

  Your pseudocode goes here.
	
	print "The string of words is: "
	for loop from i = 0, i < length, i++
		print words[i]
	
	define min = words[0]
	for loop from j = 0, j < length, j++
		if words[j] is shorter than min
			min = words[j]

	define min_size = minlength
	print "The minumum word length is: " prompt
	print min_size


COMMENTS:
 
I begin by displaying to the user the original string of words, which is done via for loop the increments through the array and prints each index.
Then I create a variable named min and set it equal to the first index in the array.
Another for loop is made to increment through the array, and after each iteration an if statement compares if the current index in words[] is shorter than the min variable.
If true then min is set to the current indent
Int min_size is defined as the length of min.
Which is then displayed to the user.  

 


*/

int MinimumWordLength(std::string words[], int length) {
  // Implement this function.
  	
	cout << "The string of words is: ";
	for(int i = 0; i < length; i++) //prints elements in words[]
	{
		cout << words[i] <<" ";
	
	}
	
       
	
	string min = words[0];//equal to the first index in the words[]
	for(int j = 0; j < length; j++)//loop thtough array words[]
	{
		if( words[j].length() < min.length()) //compares if the current index in words[] is shorter than min's length 
		{
			 min = words[j];//set min to current index
		}
		
	}
	int min_size = min.size();	
	cout << "\nThe minimum word length is: " ;
  	return min_size;
	
	cout << endl;

}

/*

PSEUDOCODE: 

algorithm MaximumWordLength
  Input: Jett is the best at algebra 
  Output: 6

  Your pseudocode goes here. 
	 
	print "The string of words is: "
	loop from i = 0, i < length, i++
		print words[i]
	
	define max = words[0]
	loop from j = 0, j < length, j++
		if words[j] is longer than max
			max = words[j]

	define max_size = max size
	print "The maximum word length is: " prompt
	print max_size


COMMENTS:
The process for function is very similar to algorithm in MinimumWordLength.
The major difference is that the if statement sign is flipped to a greater than symbol.
I have 2 for loops, 1 to loop through the array to print to user, another to compare each index of array words[].
If the current index is longer than the current max length, max length is now the current index.
Once the loop is greater than or equal to length of input, the final max length is printed to the user. 
*/
int MaximumWordLength(std::string words[], int length) {
  // Implement this function.
  
 	
	cout << "The string of words is: ";
        for(int i = 0; i < length; i++)//prints elements in words[]
        {
                cout << words[i] <<" ";

        }
        
        
        string max = words[0];//equal to the first index in the words[]
	for(int j = 0; j < length; j++)//loop thtough array words[]
        {
        	if( words[j].length() > max.length())//compares if the current index in words[] is longer than min's length
        	{	
        		max = words[j];
		}
        
        }

        int max_size = max.size();
        cout << "\nThe maximum word length is: ";
        return max_size;
 	       
 	cout << endl;

}

/*
PSEUDOCODE: 

algorithm RangeOfWordLengths
  Input:Jett is the best at algebra 
  Output: 4

  Your pseudocode goes here.
	
 	print "The string of words is: "
        loop from i = 0, i < length, i++
                print words[i]

	for loop used in MinimumWordLength
	for loop used in MaximumWordLength

	define max_size = max size
	define min_size = min size
	range = max.length - min.length
	print range

COMMENTS:
In the previous functions I found the min and max value, so i just reused the loops that found max and min.
This saves time because range is simply max - min, two values we have already found in previous parts of this assignment.
After the loops  all that is left is subtracting the two integer values to get the range of the array of strings.

*/
int RangeOfWordLengths(std::string words[], int length) {
  // Implement this function.
	
	cout << "The string of words is: ";
	for(int i = 0; i < length; i++) //prints elements in words[]
	{
		cout << words[i] <<" ";
	
	}

	string max = words[0];//equal to the first index in the words[]
	for(int j = 0; j < length; j++)//loop thtough array words[]
        {
        	if( words[j].length() > max.length())//compares if the current index in words[] is longer than min's length
        	{	
        		max = words[j];
		}
        
        }

	string min = words[0];//equal to the first index in the words[]
	for(int j = 0; j < length; j++)//loop thtough array words[]
	{
		if( words[j].length() < min.length()) //compares if the current index in words[] is shorter than min's length 
		{
			 min = words[j];//set min to current index
		}
		
	}

	int min_size = min.size();	
        int max_size = max.size();
	int range = max_size - min_size;
	cout <<"\nThe range of word lengths is: ";
  	return range;
	
	cout << endl;

}


/**
PSEUDOCODE: 

algorithm WordLengthMean
  Input:Jett is the best at algebra 
  Output: 3 (21/6 rounded down)

  Your pseudocode goes here. 

	def num = 1st index of words[]
	define total = 0

	print "The string of words is: "
        loop from i = 0, i < length, i++
                print words[i]
	
	loop from j = 0, i < length, i++
		if words[j] is not equal to a space
			num = words[j]
			total += num's size
	print output prompt
	return total / length	
	
			

COMMENTS:
First we must define num as the 1st element of the array, and define total to keep track of the number of letters.
The first loop starts at 0, capped at length, and incriments the index of array each time.
This then prints out each element as the loop moves through the array.

The second loop starts at 0, capped at length, and increments the index of the array each time.
The purpose of this loop is to count each letter without counting empty space
If the index of the array is not equal to a space, then num is equal to the current element.
Then total is equal to current total + the size of num. 
Once the loop reaches length (the end of the array), it stops and then procedes to the rest of the code

Then we return the total number of letters, divided by the number of words to find the mean word length.



Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/

int WordLengthMean(std::string words[], int length) {
  // Implement this function.

  	string num = words[0];
	int total = 0;
	 
	cout << "The string of words is: ";
        for(int i = 0; i < length; i++) //prints elements in words[]
        {
                cout << words[i] << " ";
	

        }

	
	for(int j = 0; j < length; j++)//moves through array and checks each word
        {
		if(words[j].length() != ' ' )//statement is true if the current index's length is not a space 
                {
                	num = words[j];//sets num equal to the current index
			total = total +  num.size();//total is equal to current total + the size of num.
		}
	}

	cout << "\nThe word length mean is: ";
	
 	return total / length;//#of letters/ #of words = mean

	cout << endl << endl;

}

/**
PSEUDOCODE: 

algorithm WordLengthMode
  Input:Jett is the best at algebra 
  Output: 2

  Your pseudocode goes here.
	output prompt for string 
	for int x = 1, x < length, x++
		print words[x]
	for i = 0 , i < length, i++
		tempstring = words[i]
		int j = i - 1
		while (j >= 0 && tempstring < words[j]
			words[j+1] = words[j]
			j--
		words[j+1] 
	
	num = words[0]
	mode = num
	count = 1
	cmod = 1
	
	for k = 1, k < length, k++
		if words[k] = num
			count++
		else if count > cmod
			cmod = count
			count = 1
			num = words[k]
		

	if cmod == 1
		mode = -1
	print mode
	
:COMMENTS:
The function for WordLengthMode is broken up into two main sections, sorting the array, and finding the mode
The array must be sorted first so that successivve elements are equal. This make it easier to find the mode in the following code

The second half of the code proccedes to define variables to keep track of occurances of satring lengths in the array
A for loop is used with the count variable. If the current index that the loop is on is equal to num, then increment the count of occurances to num
If count is greater than count mode, this number now has the most occurances. Then the current number is the mode
When words[k] != num, the else statment runs and sets the count back to 1 for a new number. then the new num is set in the kth element of the array
Finally if the count mode is == 1, mode is set to -1 if the length of  each string in the array all only occur once

Add comments here that might help us to understand your 
thought process, especially if you're unable to finish the
pseudocode or code. This can help us award points in the 
code logic category. 
*/
int WordLengthMode(std::string words[], int length) {
  // Implement this function.
	 cout << "The string of words is: ";
        for(int x = 0; x < length; x++) //prints elements in words[]
        {
                cout << words[x] << " ";


        }
	for(int i = 0; i < length; i++)//loop to sort array by word length
	{
		string temp = words[i];
		int j = i - 1;//sets j as the last index of words
		while(j >= 0 && temp.length() < words[j].length()) //nested loop to ensure j doesnt become negative 
								   //and temp string doest become to large
		{
			words[j + 1] = words[j];
			j--;
		} 
		words[j + 1];
	
	}
	
	string num = words[0];//num equal to first index in words[]
        string mode = num;//current mode is equal to num
        int count = 0;
        int cmod = 0;//mode counter equal to 0
	for(int k = 1; k < length; k++)
	{
		if ( words[k] == num)//if current index is equal to num
		{
			count++;//increment count
		}	
		else if(count > cmod)//if count is greater than mode counter
		{
			cmod = count;
			count = 1;
			num = words[k]; //current index is equal to num
			
		}	
				
	}	
 

	if( cmod == 1)//if mode counter is equal to 1 no mode exists
	{
		mode = -1;//no mode exists
	}
	
	int fin = mode.length();//convert mode length into int
	cout <<"\nThe word length mode is: ";
	return fin;
	
	

}

