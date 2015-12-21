#include<stdio.h>

int loop_judge(char *input_jud);
void say_hello(char *Hello_char);
void cat_bird(char *chunchun);

int main(int argc,char *argv[]){

  char *input_x;
  int exit_loop = 0; 

  while(exit_loop == 0){

    input_x = (char *)malloc(200* sizeof(char));

    printf("*)\n");
    scanf("%s",input_x);

    //printf(":)\n");

    say_hello(input_x);

    cat_bird(input_x);

    exit_loop = loop_judge(input_x);

    free(input_x);
    fflush(stdin);
  }

  printf("Bye bye :)");
  return 0;
}

int loop_judge(char *input_jud){

  if(strcmp(input_jud,"Q") == 0 || strcmp(input_jud, "q") == 0)
    {
return 1;
    }
    return 0;
}

void say_hello(char *input_x){
  //参照渡しによるポインタエラー　要インプット改良
    if(strcmp(input_x,"hello") ==0){
      printf("Hello! You are polite!");
    }

    return;
}

  void cat_bird(char *input_x){

    printf("%s\n",input_x);

    return;
}
