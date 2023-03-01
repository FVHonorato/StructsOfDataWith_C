/* Example of struct nested 1 */

#include<stdio.h>
#include<stdlib.h>

struct office{
	int cod;
	char description[30];
};

struct worker{
	int cod;
	char name[30];
	float wage;
	struct departament{
		int cod;
		char description[30];
	};
	struct office office;
};

struct worker Worker;

int main(void){

}
