#define LEN 50

struct address {
	char rua[LEN];
	char cidade_estado_cep[LEN];
};

struct student{
	char id[10];
	int idade;
	struct address home;
	struct addres school;
};

struct student person;
