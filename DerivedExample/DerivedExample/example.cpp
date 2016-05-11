#include "Bird.h"
#include "Fish.h"

int main() {
	Bird b;
	Fish f;

	Animal a1 = b;
	Animal a2 = f;

	Animal *pa1 = &b;
	Animal *pa2 = &f;
// 	pa1->Run();
// 	pa2->Run();   

	Animal &ra1 = b;
	Animal &ra2 = f;
	ra1.Run();
	ra2.Run();


	system("pause");
	return 0;
}