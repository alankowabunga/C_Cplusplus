#include <stdio.h>

/*
建立一個檔案，用 FILE (data type) + pointer ，在引入方法 fopen("路徑和檔案名稱" , "模式") 
模式 r 、 w 、a (append): 用 w 模式下更改文字會複寫內容，要接續增加文字要用 a 。

fprintf( pointer , "內容")
fgets()
fclose()
*/
main(){

    FILE *fp = fopen("test.txt","w");
    fprintf( fp,"這是一段測試文字\n。");
    fprintf(fp,"這是 m 模式下，複寫了原字串~    \n");


    fclose(fp);    
}