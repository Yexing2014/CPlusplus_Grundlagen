// Aufgabe: Übung 1.16
// Author: Yexing Geng
// Datum: 21.09.2022

#include<iostream>

int main()
{
	// init 
	int num = 0;
	int sum = 0;

	std::cout << "Geben Sie die gewünschte Zahle ein: " << std::endl;

	while (std::cin >> num)
	{
		sum += num;
	}

	std::cout<< "Sum is: " << sum << std::endl;

	return 0;
}