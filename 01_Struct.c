#include <stdio.h>

struct Character {
	int hp, mp, lv;
	float exp;
	char initial1, initial2, initial3;
}; // �޸𸮴� 4byte�� �Ҵ��մϴ�.

struct Character CharacterConstructor(int wantHp, int wantMp, int wantLv) {
	struct Character result;

	result.hp = wantHp;
	result.mp = wantMp;
	result.lv = wantLv;
	result.exp = 0;

	return result;
};

void printCharacter(struct Character target) {
	printf("ü��			: %d\n", target.hp);
	printf("����			: %d\n", target.mp);
	printf("����			: %d\n", target.lv);
	printf("����ġ			: %.02f\n", target.exp);
}

void takeDamage(struct Character target, int damage) {
	target.hp -= damage;
	printCharacter(target); // �Լ��� �Ű������� �����ϴ� ��
}

int main() {
	int myHp,	 myMp,	  myLv,	   myExp;
	int slimeHp, slimeMp, slimeLv, sliemExp;

	struct Character player;

	player.hp = 100;
	player.mp = 100;
	player.lv = 2;
	player.exp = 3.14f;

	printf("�÷��̾��� ũ��		: %d byte\n\n", sizeof(player));
	printf("�÷��̾��� ü��		: %d\n", player.hp);
	printf("�÷��̾��� ����		: %d\n", player.mp);
	printf("�÷��̾��� ����		: %d\n", player.lv);
	printf("�÷��̾��� ����ġ	: %.02f\n\n", player.exp);

	struct Character monster = CharacterConstructor(30, 10, 1);

	takeDamage(monster, 20);
	printCharacter(monster);
}