#include <stdio.h>
int getLine(char* line) 
{
    int ch;
    int i = 0;
    while((ch=getchar()) != '\n') line[i++] = ch; 
    line[i] = '\0';
    return i;
}
int main()
{
    char input[100];
    int num1, num2;
    
    FILE* fp_src;
    FILE* fp_dest;
    
    
    if((fp_src = fopen("output.txt", "r"))==NULL) {
        printf("error...");
        return 0;
    }
    if((fp_dest = fopen("output3.txt", "w"))==NULL) {
        printf("error...");
        return 0;
    }
    
    while(!feof(fp_src)) {
        
        fscanf(fp_src, "%s %d %d\n",input, &num1, &num2);
        fprintf(fp_dest,"%s %d %d\n", input, num1, num2);
        
        /*fgets(input, 100, fp_src);
        printf("출력중\n");
        fputs(input, fp_dest);*/
        //printf("%s", input);
        
        //우리가 원하는 작업을 하면 된다.
        
    }
    
    /*for(int i =0; i<5; i++){
        getLine(input);  
        fputs(input, fp);
        fputs("\n", fp);
    }
    
    
    fputs(input, fp);
    */
    
    fclose(fp_src);
    fclose(fp_dest);
    
    return 0;
}
