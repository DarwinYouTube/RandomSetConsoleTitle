#include <iostream>
#include <Windows.h>
#include <string>
#include <time.h>
#include <conio.h>

static const char rnum[] = "0123456789" "qwertyuiopasdfghjklzxcvbnm" "QWERTYUIOPASDFGHJKLZXCVBNM";
int staticLength = sizeof(rnum) - 1;
std::string RandomTitle;

char GetRandom() {
	return rnum[rand() % staticLength];
}

void SetRandomTitle() {

	srand(time(0));
	for (unsigned int i = 0; i < 40; ++i) {

		RandomTitle += GetRandom();
	}

	SetConsoleTitle(RandomTitle.c_str());
}

int main() {
	SetRandomTitle(); // SetRandomTitle

	_getch();
	return 0;
}