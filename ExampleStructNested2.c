/* Example of struct nested 1 */
#include<stdio.h>
#include<stdlib.h>

struct departament{
	int cod;
	char description[30];
};

struct office{
	int cod;
	char description[30];
};

struct worker{
	int cod;
	char nome[30];
	float salario;
	struct departament dept;
	struct office office;
};

struct worker Worker;

int main(void){

}
