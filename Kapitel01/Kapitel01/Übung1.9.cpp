﻿// Aufgabe: to learn C++
// Autor: Yexing Geng
// Datum: 07.09.2022
// Übung: 1.9

#include<iostream>


int main()
{
	// val def 
	int sum = 0;
	int i = 50;

	// while loop
	while (i <= 100)
	{
		sum += i;
		++i;
	}

	// output
	std::cout << "Sum is " << sum << std::endl;   // 不要忘了命名空间 std:: 

	return 0;
}