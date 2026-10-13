#include <stdio.h>

int main()
{
    int num = 50;
    int* pnum = &num;

    // (*pnum)++
    printf("(*pnum)++ = %d \n", (*pnum)++);
    printf("num = %d \n\n", num);

    // (*pnum)+1
    num = 50;
    printf("(*pnum)+1 = %d \n", (*pnum) + 1);
    printf("num = %d \n\n", num);

    // *pnum+=1
    num = 50;
    printf("*pnum+=1 = %d \n", *pnum += 1);
    printf("num = %d \n\n", num);

    // (*pnum)+=1
    num = 50;
    printf("(*pnum)+=1 = %d \n", (*pnum) += 1);
    printf("num = %d \n\n", num);

    // *pnum=*pnum+1
    num = 50;
    printf("*pnum=*pnum+1 = %d \n", *pnum = *pnum + 1);
    printf("num = %d \n\n", num);

    // ++*pnum
    num = 50;
    printf("++*pnum = %d \n", ++*pnum);
    printf("num = %d \n\n", num);

    // ++(*pnum)
    num = 50;
    printf("++(*pnum) = %d \n", ++(*pnum));
    printf("num = %d \n", num);

    return 0;
}