#include <iostream>

namespace Monsters
{

	enum Monstertype
	{
		Orc, 
		Skeleton,
		Ogre = 7,
		Goblins,
		Trolls,
		
	};

}

int main()
{
	Monsters::Monstertype monster{Monsters::Ogre};

	std::cout << "\nYou chose" << monster;

return 0;
}
