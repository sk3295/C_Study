#include <stdio.h>

struct Character {
	int hp, mp, lv;
	float exp;
	char initial1, initial2, initial3;
}; // 메모리는 4byte씩 할당합니다.

struct Character CharacterConstructor(int wantHp, int wantMp, int wantLv) {
	struct Character result;

	result.hp = wantHp;
	result.mp = wantMp;
	result.lv = wantLv;
	result.exp = 0;

	return result;
};

void printCharacter(struct Character target) {
	printf("체력			: %d\n", target.hp);
	printf("마나			: %d\n", target.mp);
	printf("레벨			: %d\n", target.lv);
	printf("경험치			: %.02f\n", target.exp);
}

void takeDamage(struct Character target, int damage) {
	target.hp -= damage;
	printCharacter(target); // 함수의 매개변수를 전달하는 것
}

int main() {
	int myHp,	 myMp,	  myLv,	   myExp;
	int slimeHp, slimeMp, slimeLv, sliemExp;

	struct Character player;

	player.hp = 100;
	player.mp = 100;
	player.lv = 2;
	player.exp = 3.14f;

	printf("플레이어의 크기		: %d byte\n\n", sizeof(player));
	printf("플레이어의 체력		: %d\n", player.hp);
	printf("플레이어의 마나		: %d\n", player.mp);
	printf("플레이어의 레벨		: %d\n", player.lv);
	printf("플레이어의 경험치	: %.02f\n\n", player.exp);

	struct Character monster = CharacterConstructor(30, 10, 1);

	takeDamage(monster, 20);
	printCharacter(monster);
}