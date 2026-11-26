#include <stdio.h>
#include <stdlib.h>
int main()
{
int *p;
p=(int*)malloc(3*sizeof(int));
if(p==NULL){
    printf("no memory\n");
    return 1;
}
p[0]=10;
p[1]=20;
p[2]=30;
for(int i=0;i<3;i++)
{
    printf("%d\n",p[i]);
}
free(p);//p=garbage value and memory free
return 0;
}
