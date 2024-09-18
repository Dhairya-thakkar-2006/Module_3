#include<stdio.h>
int main() {
	char line[150];
	
	printf("\n\n\t Enter a string : ");
    fgets(line,sizeof(line),stdin);
	
	int i,j;
	for(i=0,j; line[i]!='\0'; ++i){
	
	while(!(line[i]>='a' && line[i]<='z')&&!(line[i]>='A'&&line[i]
	<='z')&&!(line[i]=='\0')){
		for(j=i;line[j]!='\0';++j){
			line[j]='\0';
		}
	}
	}
	printf("\n\n\t Output String : ");
	puts(line);
}
