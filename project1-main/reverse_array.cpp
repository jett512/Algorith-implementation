using namespace std;
#include <iostream>

/**
PSEUDOCODE: 

algorithm ReverseArray
  Input: 3, 4, 7, 6, 1
  Output: 1, 6, 7, 4, 3
  

Your pseudocode goes here. 

	loop through orginal array 
		print each array index		

	define i, the index before the first element
	loop while i is less than or equal to length
		create temp array to store reveresed index's
		the temp array and orinal array set to same length
		increment i
		decrment length

  
	



COMMENTS:
Begin by creating a loop through the original array to print it out to the user
Next i need a variable to keep track of the index, but i need to start at -1, so i++ equals arr[0]

Loop while i is less than or equal to length of arr[] to get ready to reverse numbers.
A temporary array is created which is used to store reversed array in place.
arr[] and temp are set equal in length because we are not removing or adding any elements.
i is incremented to keep track of the left to right index
length is decremented to keep track of the right to left index, so that each number is counted once. 
*/

void ReverseArray(int arr[], int length) {
  // Implement this function.
  	cout <<"OriginalArray: "<< "[ ";	
	for (int x = 0; x < length; x++)//loop through the original array  
	{
		cout << arr[x] << " ";//print array out to the user
		
	}
	cout <<"] ";
	cout << "\n";
	int i = -1;//start at -1, so i++ equals first elem of arr[]
	while (i <= length)//get ready to reverse numbers
	{
		int temp = arr[i];//to store reversed array in place
		arr[i] = arr[length];
		arr[length] = temp;//seting length of new array
		i++;//left to right index
		length--;//right to left index
	}
	

}
