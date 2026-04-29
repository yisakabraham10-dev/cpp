#include <stdio.h>

int main(){
    char a = 'a';
    char *p = &a;

    printf("size of an integer %d bytes\n", sizeof(p));
    printf("Adress = %d, value= %d, size of the data type= %d, size of the pointer to that datatype= %d \n", p, *p, sizeof(a), sizeof( p));

    char *p0;
    p0 = (char*)p;

    printf("%d\n",sizeof(p));
}

// why is it returning 8 28:00