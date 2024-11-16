#include <stdio.h>
#define SIZE 100
int main()
{
    char input[SIZE];
    FILE* fp = NULL;
    int i = 0;
    if((fp=fopen("output.bin", "rb"))==NULL) {
        printf("error...");
        return 0;
    }
    //gets(input);
    //fputs(input, fp);
    //fwrite(input, strlen(input), 1, fp);
    while(!feof(fp)){
        fread(&input[i], sizeof(char), 1, fp);
        i++;
    }
    input[--i] = '\0'; //--i말고 그냥 i하면 실행시 끝에 이상한 값도 포함이 됨
    puts(input);
    fclose(fp);
    
    return 0;
}
