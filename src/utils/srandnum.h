#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	srand((unsigned)time(NULL));
	//srand(1);
	for(int i=0; i<10; i++)
	{
		std::cout << rand() << std::endl;
	}

	return 0;
}