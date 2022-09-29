// Search_Songs.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
char songs[][80] = {
		"I Left my life in Morocco",
		"Rabat, is my city",
		"Hello from the outside",
		"don't forget me",
		"The Final Countdown"
		"Stars of the world"
};
void find_song(char search_for[])
{
	bool found = 0;
	for (int i = 0; i < 6; i++)
		if (strstr(songs[i], search_for))
		{
			cout << "the songs is found ==> " << i << " : " << songs[i] << endl;
			found = 1;
		}
	if (found == 0)
		cout << "sorry this word is not a subset from any song............\n";
	
}

int main()
{
	char search_for[80];
	cout << "Enter the name of songs : " ;
	cin >> search_for;

	find_song(search_for);


}