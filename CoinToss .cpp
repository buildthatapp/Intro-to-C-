//Filename: CoinToss.cpp
//Programmer:  Louis Magdaleno													   CSCI 133, Fall 2017
//																				   Instructor:  Jolene James
//Due Date:  9/6/2017                                                              Date Submitted: 8/29/2017
//Program Description:  This program will simulate a coin toss. The goal of this program is to flip a coin until it lands on heads 3 times.

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void  print_results_of_coin_toss(int some_number) // prints the results of a coin toss
{
	const  int HEADS = 1;
	const  int TAILS = 0;

	if (some_number == TAILS)
	{
		cout << "tails" << endl;
	}
	else
	{
		cout << "heads" << endl;
	}
}


int   random_number_generator() // randomly generates a number, either 0 or 1.
{
	srand((unsigned)time(0));
	int  random_integer;
	int  range_high_number = 2;
	random_integer = (rand() % range_high_number);
	print_results_of_coin_toss(random_integer); // calling function to print in console result of coin toss
	return random_integer; // return either 0 or 1

}

void  end_summary(int total_flips) // prints to screen the total amount of coin flips taken to get 3 consecutive heads
{
	cout << "It took " << total_flips << " flips to get 3 consecutive heads." << endl;
	system("pause");
}

void coin_toss() // flips a coin by calling random_number_generator. 
{
	int  consecutive_heads = 0; 
	int  total_flip_count = 0;

	do
	{
		if (random_number_generator() == 1) // if value returned from random_number_generator is a heads, increment consecutive_heads counter
		{
			consecutive_heads++;
		}
		else
		{
			consecutive_heads = 0; // if not, set consecutive heads back to 0;
		}
		
		total_flip_count++; // keeping track of total number of flips.
	} while (consecutive_heads < 3); // break loop at 3 head flips

	end_summary(total_flip_count); // call end of file function.
}


int main() // entry point
{
	coin_toss(); // call coin_toss function.
}





