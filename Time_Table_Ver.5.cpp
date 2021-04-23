#include <stdio.h>


char Mon[100] = {'A', 'C', 'F', 'D', 'G', 'E', 'K'};
char Tue[100] = {'H', 'E', 'I', 'J', 'B', 'K', 'F'};
char Wed[100] = {'H', 'E', 'G', 'B'};
char Thu[100] = {'C', 'I', 'F', 'G', 'A', 'H', 'D'};
char Fri[100] = {'D', 'J', 'I', 'A', 'C', 'B'};


int Time(char p) {
	
	switch (p) {
		case 'A' :
			printf("��������\n");
			break;
		
		case 'B' :
			printf("ü��\n");
			break;
		
		case 'C' :
			printf("Ȯ���� ���\n");
			break;
		
		case 'D' :
			printf("���� ���ؿ� �۹�\n");
			break;
		
		case 'E' :
			printf("ȭ�� 2\n");
			break;
		
		case 'F' :
			printf("����\n");
			break;
		
		case 'G' :
			printf("������ 2\n");
			break;
		
		case 'H' :
			printf("������\n");
			break;
		
		case 'I' :
			printf("ȭ���� �۹�\n");
			break;
		
		case 'J' :
			printf("���α׷���\n");
			break;
		
		case 'K' :
			printf("���հ���\n");
			break;
		
		case 'L' :
			printf("����\n");
			break;
	}
	
	return 0;
	
}


int print_Time_Table(int k) {
	
	switch (k) {
			case 1 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d ���� : ", i+1);
					Time(Mon[i]);
				}
				break;
			
			case 2 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d ���� : ", i+1);
					Time(Tue[i]);
				}
				break;
				
			case 3 :
				for (int i = 0 ; i <= 3 ; i++) {
					printf("%d ���� : ", i+1);
					Time(Wed[i]);
				}
				break;
				
			case 4 :
				for (int i = 0 ; i <= 6 ; i++) {
					printf("%d ���� : ", i+1);
					Time(Thu[i]);
				}
				break;
				
			case 5 :
				for (int i = 0 ; i <= 5 ; i++) {
					printf("%d ���� : ", i+1);
					Time(Fri[i]);
				}
				break;
		}
		
}


int main() {
	
	printf("�ð�ǥ\n");
	printf("�ð�ǥ Ȯ�� : 1\n�ð�ǥ ���� : 2\n") ;
	
	
	int Sel;
	scanf("%d", &Sel);
	
	
	if (Sel == 1) {
		printf("������ �����ϼ���.\n");
		printf("�� : 1\nȭ : 2\n�� : 3\n�� : 4\n�� : 5\n");
		
		
		int Date;
		scanf("%d", &Date);
		
		
		print_Time_Table(Date);
		
		
	}
	
	else if (Sel == 2) {
		
		printf("�ð�ǥ�� �����ϰ� ���� ������ �����ϼ���.\n");
		printf("�� : 1\nȭ : 2\n�� : 3\n�� : 4\n�� : 5\n");
		
		
		int Date;
		scanf("%d", &Date);
		
		
		print_Time_Table(Date);
		
		
		printf("�����ϰ� ���� ���ø� �����ϼ���.\n");
		
		
		int clas;
		scanf("%d", &clas);
		
		
		printf("������ ������ �Է��ϼ���.\n");
		
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
		printf("1 �Ǵ� 2 �� �Է��� �ּ���.");
	}
	
}




