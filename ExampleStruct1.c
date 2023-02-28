/*create a struct for get data of a student*/
#include<stdio.h>
#include<stdlib.h>

struct student {
	int v_nreg; // numbers of registration
	float v_grade[3]; // grades
	float v_averange; //averange	
};

int main(){
	struct student Felipe; //set variable of type struct
	Felipe.v_nreg = 120;
	Felipe.v_grade[0] = 8.5;
	Felipe.v_grade[1] = 7.2;
	Felipe.v_grade[2] = 5.4;
	Felipe.v_averange=(Felipe.v_grade[0]+Felipe.v_grade[1]+Felipe.v_grade[3])/3;
	printf("Registration:/d\n", Felipe.v_nreg);
	printf("Averange: %2f\n", Felipe.v_averange);
	system("pause");
	return (0);
		
}
