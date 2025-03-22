typedef struct {
    int dia;
    int mes;
    int ano;
    } data;


data *p; // p é um ponteiro para registros do tipo data
data hoje;
p = &hoje; // agora p aponta para hoje
(*p).dia = 31; // mesmo efeito que hoje.dia = 31

printf("hoje.dia: %d\n", hoje.dia);
printf("hoje.mes: %d\n", hoje.mes);
printf("(*p).dia: %d\n", (*p).dia);
printf("p->dia: %d\n", p->dia);