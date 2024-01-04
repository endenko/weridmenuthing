#include <iostream>
#include <stdio.h>
using namespace std; 
#define BLOCKSIZE 1024 
void copyfile(char *source,char *dest)
{
	FILE *f1,*f2;
	char block[BLOCKSIZE];
	int n; 
	f1 = fopen(source,"r");
	f2 = fopen(dest,"w");
	while ((n=fread(block,sizeof (char),BLOCKSIZE,f1))>0)
	fwrite(block,sizeof(char),n,f2);
	fclose(f1);
	fclose(f2); 
 } 
 int main(){
 	copyfile("tutu1.cpp","tutu5.cpp");
 } 

