#include <stdio.h>

typedef struct {
	char name[20];
	int kor;
	int eng;
	int mat;
	int sum;
	double average;
	int rank;
}Sdata;



int main(void)
{

	FILE *fin, *fout;
	fin = fopen("score.dat", "r");
	fout = fopen("score.out", "w");

	if (fin == NULL || fout == NULL){
		fprintf(stdout, "can't open file\n");
		return 1;
	}

	Sdata students[10];

	for (int i=0;i<10;++i){
		fscanf(fin, "%s %d %d %d", students[i].name, &students[i].kor,
			&students[i].eng, &students[i].mat);
	}

	//sum, average, rank
	for (int i=0;i<10;++i){
		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3;
		students[i].rank = 1;
	}

	// // rank sorting 해서 성적 ..
	// Sdata tmp_s;
	// for (int i=0;i<10;++i){
	// 	for (int j=i+1;j<10;++j){
	// 		if (students[i].average < students[j].average){
	// 			tmp_s = students[i];
	// 			students[i] = students[j];
	// 			students[j] = tmp_s;
	// 		}
	// 	}
	// }

	// for (int i=0;i<10;++i)
	// 	students[i].rank = i+1;

	// // rank
	// int t[10]= {0};
	// for (int i=0;i<10;++i){ // 반복수 i 번째 등수를 찾자. 
	// 	for (int j=0;j<10;++j){ // 비교당하는 값
	// 		for (int k=0;k<j+1;++k){ 
	// 			if(t[i] > 0)
	// 				t[i] += 1;
	// 		}
	// 		for (int k=0;k<j+1;++k){ // 정한 값 제외
	// 			if(t[k] != j){
	// 				if (students[t[i]].average < students[j].average){
	// 					t[i] = j;
	// 				}
	// 			}
	// 		}
	// 	}
	// } -- 실패.

	// rank 점수가 높은 사람이 있을때 순위를 더함.
	for (int i=0;i<10;++i){
		for (int j=0;j<10;++j){
			if(students[i].sum < students[j].sum)
				++students[i].rank;
		}
	}


	// 랭크 포인터만 바꾸어서 오버해드를 줄인다. 
	Sdata *table[10];
	for (int i=0;i<10;++i){
		table[i] = &students[i];
	}

	for (int i=0; i<10-1;++i){
		for(int j=i+1;j<10;++j){
			if( table[i] -> sum < table[j] -> sum){
				Sdata *tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
		}
	}

	// 출력 
	fprintf(fout, "-----------------------------------------------\n");
	fprintf(fout, "                 Test Result                   \n");
	fprintf(fout, "-----------------------------------------------\n");
	for (int i=0;i<10;++i){
		// fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n", students[i].name, students[i].kor,
		// 	students[i].eng, students[i].mat, students[i].sum,
		// 	students[i].average, students[i].rank);
		fprintf(fout, "%-20s %3d %3d %3d %3d %6.2f %2d\n", table[i] -> name, table[i] -> kor,
			table[i] -> eng, table[i] -> mat, table[i] -> sum,
			table[i] -> average, table[i] -> rank);
	}
	fprintf(fout, "-----------------------------------------------\n");

	fclose(fin);
	fclose(fout);
	return 0;
}