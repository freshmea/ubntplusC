#include <stdio.h>

int main(void)
{
	while(1){
		int score;
		printf("input score :");
		scanf("%d", &score);

		// char grade = 'F';
		// if (score >= 90){
		// 	grade = 'A';
		// }else if(score >= 80){
		// 	grade = 'B';
		// }else if(score >= 70){
		// 	grade = 'C';
		// }else if(score >= 60){
		// 	grade = 'D';
		// }else{
		// 	grade = 'F';
		// }
		// printf("score : %d --- %c\n", score, grade);

		//switch case 문 적용. 

		
		// switch (score/ 10){
		// 	case 10:
		// 		// printf("score : %d -- A\n", score);// case 10 과 case 9가 같으면 break를 쓰지 않고 코딩하면 됨.
		// 		// break;
		// 	case 9:
		// 		printf("score : %d -- A\n", score);
		// 		break;
		// 	case 8:
		// 		printf("score : %d -- B\n", score);
		// 		break;
		// 	case 7:
		// 		printf("score : %d -- C\n", score);
		// 		break;
		// 	case 6:
		// 		printf("score : %d -- D\n", score);
		// 		break;
		// 	default: // 5, 4, 3, 2, 1, 0
		// 		printf("score : %d -- F\n", score);
		// 		break;
		// }
		char grade;
		switch (score/ 10){
			case 10:
				// printf("score : %d -- A\n", score);// case 10 과 case 9가 같으면 break를 쓰지 않고 코딩하면 됨.
				// break;
			case 9:
				grade = 'A';
				break;
			case 8:
				grade = 'B';
				break;
			case 7:
				grade = 'C';
				break;
			case 6:
				grade = 'D';
				break;
			default: // 5, 4, 3, 2, 1, 0
				grade = 'F';
				break;
		}
		printf("score : %d -- %c\n", score, grade);
	}
	return 0;
}