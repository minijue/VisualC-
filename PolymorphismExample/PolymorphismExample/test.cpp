#include "Tuna.h"
#include "Carp.h"

void MakeFishSwim(Fish &fish) {
	fish.Swim();
}

void MakeSwim(Fish* pf) {
	pf->Swim();
}

void DeleteFish(Fish* pf) {
	delete pf;
}

int main() {
	Tuna t;
	t.Swim();

	Carp c;

	Fish *pf;
	Fish &r = c;
	r.Swim();

	system("pause");
	return 0;
}