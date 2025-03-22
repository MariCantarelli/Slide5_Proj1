data *p; // p é um ponteiro para registros do tipo data
data hoje;
p = &hoje; // agora p aponta para hoje
(*p).dia = 31; // mesmo efeito que hoje.dia = 31