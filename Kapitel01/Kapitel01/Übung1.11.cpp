// Aufgabe: Übung 1.11 & Übung 1.13 & Übung 1.14
// Autor: Yexing Geng
// Datum: 08.09.2022

// Übung 1.14 while和for循环的优缺点
// while循环与for循环功能是等价的
// while适合循环数量未知的情况下
// for形式简洁，但是循环次数需要已知

#include<iostream>

int main()
{
	// val def
	int erst_num = 0;
	int zweit_num = 0;
	int tmp = 0;

	// die Zahl eingeben
	std::cout << "Geben Sie die erst Zahl ein: " << std::endl;
	std::cin >> erst_num;

	std::cout << "Geben Sie die zweite Zahl ein: " <<  std::endl;
	std::cin >> zweit_num;
	
	std::cout << std::endl;
	
	// 
	if (erst_num > zweit_num)
	{
		tmp = erst_num;
		erst_num = zweit_num;
		zweit_num = tmp;
	}

	//while (erst_num <=  zweit_num)
	//{
	//	std::cout << erst_num << std::endl;
	//	++erst_num;
	//}

	for (erst_num; erst_num <= zweit_num; ++erst_num)
	{
		std::cout << erst_num << std::endl;
	}

	return 0; 
}