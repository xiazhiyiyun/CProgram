#include <stdio.h>
#define MAXLENGTH 1000

int get_line(char s[],int lim);
int delete(char s[],int length);
int judge(char s[],int length);

int main()
{
    int len = 0;
    char line[MAXLENGTH];

    while((len = get_line(line,MAXLENGTH)) > 0){

       if(judge(line,len)){ 
          len = delete(line,len);
	  if(len > 1)
	      printf("%s",line);
       }
       else
	  printf("%s",line);
        
    }
    return 0;
}

int get_line(char s[],int lim){
    int c;
    int i = 0;

    for(i = 0;i < lim - 1 && (c = getchar()) != EOF && c != '\n';i++){
    
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
	i++;
    }
    if(i == lim-1){
       printf("The length of line may over the The length of line may over the array length! Please check!\n");
    }

    s[i] = '\0';
    return i;

}
/*
void copy(char from[],char to[]){
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0'){
    
       i++;
    }
}
*/
int judge(char s[],int length){

    int flag = 0;
    if(s[length-2] == '\t' || s[length-2] == ' ')
        flag=1;
    return flag;

}

int delete(char s[],int length){

    int flag = 0;
    while(flag = judge(s,length)){
        s[length-2] = s[length-1];
        s[length-1] = s[length];
	length--;
    }
    return length;
}
