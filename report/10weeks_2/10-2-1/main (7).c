#include <stdio.h>

int main()
{
    int array[1000];
    FILE* fp;
    int i = 0;
    //for(int i =0; i<100; i++) array[i] = i;
    
    fp = fopen("array.bin", "rb");
    if(fp==NULL) return -1;
    
    //fwrite(array, sizeof(array), 1, fp);
    //fwrite(array, sizeof(int), 100, fp);
    while(fread(&array[i++], sizeof(int), 1, fp));
    
    i--;
    for(int j =0; j<i; j++) printf("%d ", array[j]);
    
    fclose(fp);
    /*
    fread(array, sizeof(int), 100, fp);
    for(int i = 0; i<100, i++) printf("%d", array[i]);
    */
    return 0;
}
