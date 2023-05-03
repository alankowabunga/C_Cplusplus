#include <stdio.h>

/*
建立一個檔案，用 FILE (data type) + pointer ，在引入方法 fopen("路徑和檔案名稱" , "模式") 
模式 r 、 w 、a (append): 用 w 模式下更改文字會複寫內容，要接續增加文字要用 a 。

fprintf( pointer , "內容")
fgets()
fclose()
*/
main(){

    FILE *fp = fopen("test.txt","a");
    fprintf( fp,"這是用 a 模式，字串會接續增加在後面!\n");

    
    fclose(fp);    
}