#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#define MAXCHAR 2500000

int main(){
  char str[MAXCHAR];
  FILE* fp;
  fp = fopen("Pi_2500000.txt", "r");
    if (fp == NULL)
      {
	printf("Could not open file %s","Pi");
	return 0;
      }
    int seq[5]={0,0,0,0,0};
    int c=0;

    while (fgets(str, MAXCHAR, fp) != NULL)
      {printf("%s", "Se pudo leer el archivo");
	  }
    int i;
    for(i=0; i<MAXCHAR; i++)
      {
	if(str[i]=='1'){
            c=1;
            seq[0]++;
        }
        else{
	  char numero[12];
	  sprintf(numero, "%d", c);
            if(str[i]== numero){
                seq[c]++;
                c++;
                if(c==5){
                    c=0;
                    }
            }
            else{
                c=0;	  
	    }
	}
      }
    for (i=0;i<5;i++)
      {
	printf("%d/n", seq[i]);
      }
    fclose(fp);

    return 0;
}
