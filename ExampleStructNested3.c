/* Example of struct nested with typedef */
#include<stdio.h>
#include<stdlib.h>

typedef struct departament{
	int cod;
	char description[30];
} Departement;

typedef struct office{
	int cod;
	char description[30];
} Office;

typedef struct worker{
	int cod;
	char name[30];
	float salario;
	Departament dept;
	Office office;
}Worker;

printf("\n TEXT %_", name_vector_struct[index].name_member_struct);

int main(void){

}
