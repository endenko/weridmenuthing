#include <iostream>
#include <stdio.h>
using namespace std; 
#define LINE 256 
void copyfile(char *source,char *dest)
{
	FILE *f1,*f2;
	char line[LINE]; 
	f1 = fopen(source,"r");
	f2 = fopen(dest,"w");
	while (fgets(line,LINE,f1)!=NULL)
		fputs(line,f2); 
	fclose(f1);
	fclose(f2); 
 } 
 int main(){
	copyfile("tutu2.cpp","tutu3.cpp");
} 
