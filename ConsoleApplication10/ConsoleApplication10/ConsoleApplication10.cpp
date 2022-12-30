#include <iostream>

enum ItemTypes
{
	ITEM_HEALTH_POTION,
	ITEM_TORCH,
	ITEM_ARROW,
	MAX_ITEMS
};

int countTotalItems(int* items) // нам здесь не нужно передавать длину массива, так как она уже указана членом MAX_ITEMS перечисления ItemTypes
{
	int totalItems = 0;
	for (int index = 0; index < MAX_ITEMS; ++index)
		totalItems += items[index];

	return totalItems;
}

int main()
{
	int items[MAX_ITEMS]{ 3, 6, 12 }; // используем uniform-инициализацию для указания стартового количества предметов, которые имеет при себе игрок (C++11)
//	int items[MAX_ITEMS] = { 3, 6, 12 }; // используйте список инициализаторов, если у вас не поддерживается C++11

	std::cout << "The player has " << countTotalItems(items) << " items in total.\n";

	return 0;
}