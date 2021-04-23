#include <stdio.h>


char Mon[100] = {'A', 'C', 'F', 'D', 'G', 'E', 'K'};
char Tue[100] = {'H', 'E', 'I', 'J', 'B', 'K', 'F'};
char Wed[100] = {'H', 'E', 'G', 'B'};
char Thu[100] = {'C', 'I', 'F', 'G', 'A', 'H', 'D'};
char Fri[100] = {'D', 'J', 'I', 'A', 'C', 'B'};


int Time(char p) {
	
	switch (p) {
		case 'A' :
			printf("경제수학\n");
			break;
		
		case 'B' :
			printf("체육\n");
			break;
		
		case 'C' :
			printf("확률과 통계\n");
			break;
		
		case 'D' :
			printf("영어 독해와 작문\n");
			break;
		
		case 'E' :
			printf("화학 2\n");
			break;
		
		case 'F' :
			printf("기하\n");
			break;
		
		case 'G' :
			printf("물리학 2\n");
			break;
		
		case 'H' :
			printf("미적분\n");
			break;
		
		case 'I' :
			printf("화법과 작문\n");
			break;
		
		case 'J' :
			printf("프로그래밍\n");
			break;
		
		case 'K' :
			printf("융합과학\n");
			break;
		
		case 'L' :
			printf("자율\n");
			break;
	}
	
	return 0;
	
}


int print_Time_Table(int k) {
	
	switch (k) {
			case 1 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d 교시 : ", i+1);
					Time(Mon[i]);
				}
				break;
			
			case 2 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d 교시 : ", i+1);
					Time(Tue[i]);
				}
				break;
				
			case 3 :
				for (int i = 0 ; i <= 3 ; i++) {
					printf("%d 교시 : ", i+1);
					Time(Wed[i]);
				}
				break;
				
			case 4 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d 교시 : ", i+1);
					Time(Thu[i]);
				}
				break;
				
			case 5 :
				for (int i = 0 ; i <= 5 ; i++) {
					printf("%d 교시 : ", i+1);
					Time(Fri[i]);
				}
				break;
		}
		
}


int main() {
	
	printf("시간표\n");
	printf("시간표 확인 : 1\n시간표 변경 : 2\n") ;
	
	
	int Sel;
	scanf("%d", &Sel);
	
	
	if (Sel == 1) {
		printf("요일을 선택하세요.\n");
		printf("월 : 1\n화 : 2\n수 : 3\n목 : 4\n금 : 5\n");
		
		
		int Date;
		scanf("%d", &Date);
		
		
		print_Time_Table(Date);
		
		
	}
	
	else if (Sel == 2) {
		
		printf("시간표를 변경하고 싶은 요일을 선택하세요.\n");
		printf("월 : 1\n화 : 2\n수 : 3\n목 : 4\n금 : 5\n");
		
		
		int Date;
		scanf("%d", &Date);
		
		
		print_Time_Table(Date);
		
		
		printf("변경하고 싶은 교시를 선택하세요.\n");
		
		
		int clas;
		scanf("%d", &clas);
		
		
		printf("변경할 수업을 입력하세요.\n");
		
		fflush(stdin);
		
		
		char change;
		scanf("%c", &change);
		
		switch (Date) {
			case 1 :
				Mon[clas - 1] = change;
				break;
				
			case 2 :
				Tue[clas - 1] = change;
				break;
				
			case 3 :
				Wed[clas - 1] = change;
				break;
				
			case 4 :
				Thu[clas - 1] = change;
				break;
				
			case 5 :
				Fri[clas - 1] = change;
				break;
		}
		
		print_Time_Table(Date);
	}
	
	else {
		printf("1 또는 2 를 입력해 주세요.");
	}
	
}




