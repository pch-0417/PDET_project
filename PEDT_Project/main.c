#include <stdio.h>
#include <Windows.h>
#include <conio.h>
void start_menu();
char* per(char array_1[], int array_2[]);

int main(void) {
	start_menu();
	system("cls");
	char* question[25] = {
		"1. 비 오는 날, 자연스럽게 파전에 막걸리나 칼국수가 떠오르나요?",
		"2. 특별한 기념일에는 분위기 좋은 곳에서 파스타나 스테이크를 먹고 싶나요?",
		"3. 입맛이 없을 때, 다른 무엇보다 깔끔한 초밥이나 소바가 가장 먼저 생각나나요?",
		"4. 친구 여럿이 모이면, 요리 여러 개를 가운데 두고 나눠 먹는 걸 좋아하나요?",
		"5. 스트레스받을 때, 매운 떡볶이나 닭발, 불족발 같은 음식으로 푸는 것을 즐기나요?",
		"6. 와인이나 맥주와 함께 치즈, 올리브, 살라미 등을 곁들여 먹는 것을 즐기나요?",
		"7. 얼얼하고 땀나는 마라탕이나 마라샹궈의 매력을 즐기는 편인가요?",
		"8. 음식의 '맛'만큼이나 눈으로 보는 '모양(플레이팅)'의 정갈함도 중요하다고 생각하나요?",
		"9. 여행지에 가면, 블로그 맛집보다 현지인만 가는 허름한 식당에 도전하는 편인가요?",
		"10. 식당에 가면, 새로운 메뉴에 도전하기보다 늘 먹던 익숙한 메뉴를 주문하는 편인가요?",
		"11. 메뉴판에 '오늘의 특선'이나 '셰프 추천'이 있으면, 일단 믿고 주문해 보나요?",
		"12. 맛집이라고 해도, 웨이팅이 30분 이상이면 과감히 포기하고 다른 곳으로 갑니다.",
		"13. 편의점에 처음 보는 맛의 신상 음료나 과자가 나오면, 실패할 걸 알면서도 호기심에 사보는 편인가요?",
		"14. 나는 내가 아는 맛, 검증된 맛을 먹을 때 가장 큰 안정감과 행복을 느낍니다.",
		"15. 약속 시간 사이에 밥 먹을 시간이 30분밖에 없다면, 거르기보다 15분 만에라도 빨리 먹는 쪽을 택합니다.",
		"16. 친구가 음식을 빨리 먹으라고 재촉하면, '맛도 못 느끼겠다'며 스트레스를 받습니다.",
		"17. 음식이 나오면, 뜨거운 걸 알면서도 일단 입에 넣고 보는 편입니다.",
		"18. 식사를 할 때, TV나 유튜브를 보면서 한 시간 이상 천천히 먹는 것을 즐깁니다.",
		"19. 솔직히, 나는 다른 사람들보다 식사 속도가 빠르다는 말을 들어봤습니다.",
		"20. 아무리 분위기 좋은 레스토랑이라도, 음식이 결정적으로 맛없으면 다시는 가지 않습니다.",
		"21. 음식 맛은 평범해도, 함께하는 사람이 좋거나 분위기가 좋으면 나에겐 '맛집'으로 기억됩니다.",
		"22. 식사 중에, '이 음식에는 어떤 재료가 들어갔을까?' 하고 맛을 분석하고 이야기하는 것을 즐깁니다.",
		"23. 식당을 고를 때, 음식 사진보다 그곳의 인테리어나 창밖 풍경 사진을 더 유심히 보는 편입니다.",
		"24. 혼밥을 할 때, 오로지 음식 맛에만 집중할 수 있어서 오히려 더 편하고 좋을 때가 있습니다.",
		"25. 음식은 대화를 위한 훌륭한 배경일 뿐, 식사 자리의 핵심은 '사람들과의 소통'이라고 생각합니다."
	};
	char numbers[25] = {
		'K', 'W', 'J', 'C', 'K', 'W', 'C', 'J',  // 종류(Cuisine)
		'R', 'T', 'R', 'T', 'R', 'T',              // 태도(Attitude)
		'I', 'O', 'I', 'O', 'I',                  // 속도(Speed)
		'F', 'M', 'F', 'M', 'F', 'M'               // 포커스(Focus)
	};
	int score[25] = { 0 };

	for (int i = 0; i < 25; i++) {
		printf("\n1.매우 아니다. 2.아니다. 3.보통이다. 4.그렇다. 5.매우 그렇다.\n");
		printf("%s\n", *(question + i));
		printf("당신의 선택: ");
		scanf("%d", &score[i]);
	}


	char* PEDT_mastor = per(numbers, score);

	printf("\n========================================\n");
	printf("당신의 PDET 유형은 %c-%c%c%c 입니다.\n", PEDT_mastor[0], PEDT_mastor[1], PEDT_mastor[2], PEDT_mastor[3]);
	printf("========================================\n");


	switch (PEDT_mastor[0]) {
	case 'K': printf("- 당신은 익숙하고 깊은 맛의 한식을 좋아합니다\n"); break;
	case 'W': printf("- 당신은 특별한 날의 분위기를 더해주는 양식을 좋아합니다.\n"); break;
	case 'J': printf("- 당신은 맛과 멋의 정갈한 조화를 중시하는 일식을 좋아합니다.\n"); break;
	case 'C': printf("- 당신은 여럿이 함께 즐기는 다채로운 맛의 중식을 좋아합니다.\n"); break;
	}

	switch (PEDT_mastor[1]) {
	case 'R': printf("- 당신은 새로운 맛을 찾아 떠나는 것을 두려워하지 않는 모험가형(Risk-taking)입니다.\n"); break;
	case 'T': printf("- 당신은 검증된 맛에서 행복을 느끼는 안정추구형(Traditional)입니다.\n"); break;
	}

	switch (PEDT_mastor[2]) {
	case 'I': printf("- 당신은 맛을 빠르게 즐기고 다음을 향하는 속도중시형(hIgh)입니다.\n"); break;
	case 'O': printf("- 당신은 음식의 맛을 음미하며 여유를 즐기는 과정중시형(lOw)입니다.\n"); break;
	}

	switch (PEDT_mastor[3]) {
	case 'F': printf("- 당신은 음식 본연의 맛에 집중하는 미식가형(Food-Focused)입니다.\n"); break;
	case 'M': printf("- 당신은 함께하는 사람과의 교감을 더 중시하는 관계지향형(Mood-Focused)입니다.\n"); break;
	}
	printf("\n");

	return 0;
}
void start_menu() {
	char P[9][9] = {
		"#########",
		"##     ##",
		"##     ##",
		"##     ##",
		"#########",
		"##       ",
		"##       ",
		"##       ",
		"##       "
	};
	char D[9][9] = {
		"#########",
		"##     ##",
		"##      #",
		"##      #",
		"##      #",
		"##      #",
		"##      #",
		"##     ##",
		"#########"
	};
	char E[9][9] = {
		"#########",
		"##       ",
		"##       ",
		"#########",
		"##       ",
		"##       ",
		"#########",
		"##       ",
		"#########"
	};
	char T[9][9] = {
		"#########",
		"   ##    ",
		"   ##    ",
		"   ##    ",
		"   ##    ",
		"   ##    ",
		"   ##    ",
		"   ##    ",
		"   ##    "
	};
	char S[9][9] = {
		"  ###### ",
		" ##    ##",
		"##       ",
		" ##      ",
		"  #####  ",
		"      ## ",
		"##    ## ",
		" ##    ##",
		"  ###### "
	};
	char A[9][9] = {
		"  #####  ",
		" ##   ## ",
		"##     ##",
		"##     ##",
		"#########",
		"##     ##",
		"##     ##",
		"##     ##",
		"##     ##"
	};
	char R[9][10] = {
		"#########",
		"##     ##",
		"##     ##",
		"#########",
		"## ##    ",
		"##   ##  ",
		"##    ## ",
		"##     ##",
		"##      ##"
	};

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 4; j++) {
			printf("\t");
		}
		for (int j = 0; j < 9; j++) {
			printf("%c", P[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {
			printf("%c", D[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {

			printf("%c", E[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {
			printf("%c", T[i][j]);
		}
		printf("\t\n");

	}
	printf("\n\n");
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 3; j++) {
			printf("\t");
		}
		for (int j = 0; j < 9; j++) {
			printf("%c", S[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {
			printf("%c", T[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {

			printf("%c", A[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 10; j++) {
			printf("%c", R[i][j]);
		}
		printf("\t");
		for (int j = 0; j < 9; j++) {
			printf("%c", T[i][j]);
		}

		printf("\t\n");
	}
	printf("\033[?25l"); // 커서 숨기기
	while (1) {
		printf("\033[23;1H");
		printf("\t\t\t\t\t게임을 시작하려면 아무키나 입력하세요");
		Sleep(1000);
		if (_kbhit()) {
			break;
		}
		printf("\033[23;1H");
		printf("                                                                                                         ");
		Sleep(1000);
		if (_kbhit()) {
			break;
		}
	}
	printf("\033[?25h");
	_getch();
	printf("\n\n");
	printf("\t\t\t\t\t\t 게임이 시작되었습니다!");

}
char* per(char array_1[], int array_2[]) {

	static char PDET_main[4] = { 0 };
	double total[10] = { 0 }; //'K', 'W', 'J', 'C', 'R', 'T', 'I', 'O', 'F', 'M'
	char PDET[10] = { 'K', 'W', 'J', 'C', 'R', 'T', 'I', 'O', 'F', 'M' };

	for (int i = 0; i < 25; i++) {
		switch (array_1[i]) {
		case 'K': total[0] += array_2[i]; break;
		case 'W': total[1] += array_2[i]; break;
		case 'J': total[2] += array_2[i]; break;
		case 'C': total[3] += array_2[i]; break;
		case 'R': total[4] += array_2[i]; break;
		case 'T': total[5] += array_2[i]; break;
		case 'I': total[6] += array_2[i]; break;
		case 'O': total[7] += array_2[i]; break;
		case 'F': total[8] += array_2[i]; break;
		case 'M': total[9] += array_2[i]; break;
		}
	}


	double max_score = total[0];
	int max_idx = 0;
	for (int i = 1; i < 4; i++) {
		if (total[i] > max_score) {
			max_score = total[i];
			max_idx = i;
		}
	}
	PDET_main[0] = PDET[max_idx];

	PDET_main[1] = (total[4] > total[5]) ? PDET[4] : PDET[5]; // R vs T
	PDET_main[2] = (total[6] > total[7]) ? PDET[6] : PDET[7]; // I vs O
	PDET_main[3] = (total[8] > total[9]) ? PDET[8] : PDET[9]; // F vs M

	return PDET_main;
}