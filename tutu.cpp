#include <iostream>
#include <stdio.h>
using namespace std; 

void copyfile(char *source,char *dest)
{
	FILE *f1,*f2;
	f1 = fopen(source,"r");
	f2 = fopen(dest,"w");
	while (!feof(f1))
	fputc(fgetc(f1),f2);
	fclose(f1);
	fclose(f2); 
 } 
 void view(char *Name)
 {
 	FILE *f;
	 f = fopen(Name,"r");
	 while (!feof(f))
	 cout<<char(fgetc(f));
	 fclose(f); 
  } 
 int main(){
	view("tutu.cpp");
	copyfile("tutu.cpp","tutu1.cpp");
} 
