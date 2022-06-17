#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

/**
THIS FUNCTION IS PROVIDED AS PART OF THE STARTER CODE.
DO NOT MODIFY THIS FUNCTION. 
*/
std::string ConvertFloatToStr(float n, int precision) {
  std::stringstream ss; 
  ss << std::fixed << std::setprecision(precision) << n; 
  return ss.str();
}

/**
PSEUDOCODE: 

algorithm ApproxSqrt
  Input: What int n you want to find the square root of
  Output: a float number that is approx the square root of n	

  Your pseudocode goes here.
	
low = 0
high = n
define est
for i from 0 <= # of iterations
	est = (low + high) / 2
	if est^2 == n
		return est
	else if est^2 > n
		high = est
	else
		low = est
	decrement iteration
print est

COMMENTS:

Begin by defining variables high and low to set limits for the estimates.
When finding the square root of n, the answer will always be less than n, but greater than 0.
This means that we will be estimating the middle point between the two.
Iterations defines how many times we will find the middle point between high and low. 

For loop is used to execute the process of finding the middle point up to the desired number of iterations.
Each time it runs we will be getting closer to the true square root,
with diminishing returns as iterations becomes larger. 

Then defined the est(estimation) variable as the range between high and low. 
If statment to compare if the estimate squared is equal to n, if so that is the new approx root.
else if the estimate squared is less than n, high is now equal to the current estimate because est is too high
else, the only other possibility is to be greater than n, therefore low is the current estimate because est is too low

After looping for the desired amount of iterations, the final estimate is printed.

*/
std::string ApproxSqrt(int n, int iterations)
{
  // Implement this function.
  // You may call ConvertFloatToStr as part of your solution
	
	float low = 0;//Lower limit for estimate
	float high = n;//upper limit for estimate
	float est;//estimate
	
	
	for(int i = 0; i <= iterations; i++) //find middle point up to the desired number of iterations.

	{	
		
		 est  = low + ( high - low) / 2.0;//estimate equal to range of high to low
      
        	if (est*est == n)//estimate was correct
		{
			return ConvertFloatToStr(est, .00001);
		}
        	 if( est*est > n)//estimate^2 was too high
		{
                	high = est;//new upper bound for estimate range
		}
		else//estimate^2 was too low
		{
			low = est;//new lower bound for estimate range
		}
	
		iterations--;
	
		
	}

	string x = " ";//temp variable
	cout << est << setprecision(.00001) << " ";
	return x;//return blank space
	
}	
