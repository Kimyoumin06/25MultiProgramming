#include <stdio.h>
#include <time.h>

/*
    [C ¾ð¾î ±âº» ÀÚ·áÇü ¼³¸í]

    - int       : Á¤¼öÇü. º¸Åë 4¹ÙÀÌÆ®. ¿¹: 1, -3, 42
    - long      : ´õ Å« ¹üÀ§ÀÇ Á¤¼ö. º¸Åë 4~8¹ÙÀÌÆ®. ¿¹: 1000000000L
    - float     : ´ÜÁ¤µµ ½Ç¼öÇü (¼Ò¼öÁ¡). º¸Åë 4¹ÙÀÌÆ®. ¿¹: 3.14f
    - double    : ¹èÁ¤µµ ½Ç¼öÇü. º¸Åë 8¹ÙÀÌÆ®. ¿¹: 3.141592
    - char      : ¹®ÀÚÇü. 1¹ÙÀÌÆ®. ¿¹: 'a', 'Z'
    - void      : ¹ÝÈ¯ °ªÀÌ ¾øÀ½À» ³ªÅ¸³¿. ¿¹: void ÇÔ¼ö()
    - clock_t   : ½Ã°£ ÃøÁ¤À» À§ÇÑ Å¸ÀÔ. Á¤¼öÇü ±â¹ÝÀÌ¸ç <time.h>¿¡¼­ Á¤ÀÇµÊ
*/

int moveCursor(int x, int y)
{
    printf("\033[%d;%dH", y + 1, x + 1);
}

int main() {
    clock_t start, end;       // ½ÃÀÛ°ú ³¡ ½Ã°£ ÀúÀå¿ë º¯¼ö
    double cpu_time_used;     // °æ°ú ½Ã°£ (ÃÊ) ÀúÀå¿ë º¯¼ö

    start = clock();          // ÇöÀç CPU ½Ã°£À» ½ÃÀÛ ½Ã°£À¸·Î ÀúÀå

    int i = 0;
    // ¿¹½Ã ÀÛ¾÷: ½Ã°£ÀÌ Á¶±Ý °É¸®´Â ·çÇÁ (½Ã°£ ÃøÁ¤À» À§ÇÑ ´õ¹Ì ÀÛ¾÷)
    while (i < 100000)
    {
        moveCursor(0, 0);
        printf("À¸È÷È÷ÆR %d\n", i);
        i = i + 1;
    }

    end = clock();            // ÇöÀç CPU ½Ã°£À» ³¡ ½Ã°£À¸·Î ÀúÀå

    // °æ°ú ½Ã°£ °è»ê (Æ½ ¼ö Â÷ÀÌ / ÃÊ´ç Æ½ ¼ö)
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nÀÛ¾÷¿¡ °É¸° ½Ã°£: %.3fÃÊ\n", cpu_time_used);  // °á°ú Ãâ·Â

    return 0;
}