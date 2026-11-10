#include<stdio.h>
#include<stdlib.h>
int main()
{
  char ch;
  FILE *fp;
  fp=fopen("data,txt","w");
  fprintf(fp,"The C programming classes are very useful and informative.The concepts are explained clearly with simple examples.practical sessionshelp us understand programming better.The teaching method is easy to understand.I am improving my programming skills through this course");
  fclose(fp);
  fp=fopen("data.txt","r");
  while((ch=fgetc(fp))!=EOF)
  {
   printf("%c",ch);
  }
  fclose(fp);
  fp=fopen("data.txt","a");
  fprintf(fp,"the teaching is very clear and easy to understand.sir explain every program step by step.practical examples help us understand C programming better.teaching makes programming more interesting.");
  fclose(fp);
  return 0;
}
