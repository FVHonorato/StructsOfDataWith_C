/* token of student*/
#include<stdio.h>
#include<conio.h>

int main(void){

	/* creating the struct*/
	struct token_of_student{
		char name[50];
		char discipline;
		float grade_test1;
		float grade_test2;
	};

	/*creating the variable studend which be of type struct token_of_student*/
	struct token_of_student student;

	printf)("\n ---------------------- Registration of student --------------------\n\n\n");
	printf('Name of student .......:');
	fflush(stdin);
	fgets(aluno.name , 40, stdin);
	printf("Discipline ......: ");
	fflush(stdin);
	fgets(aluno.discipline, 40, stdin);
	printf("Informe a 1a. nota ..: ");
	scanf("%f", &student.grade_test1); 
	printf("Informe a 2a. nota ..: ");
	scanf("%f", &student.grade_test2);
	printf("\n\n --------- Lendo os dados da struct ---------\n\n");
	printf("Name ...........: %s", aluno.name);
	printf("Disciplina .....: %s", aluno.discipline);
	printf("Nota da Prova 1 ...: %.2f\n" , student.grade_test1);
	printf("Nota da Prova 2 ...: %.2f\n" , student.grade_test2);
	getch();
	return(0);
	
}
