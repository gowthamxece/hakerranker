#include<stdio.h>
int main()
{
int n;
printf("Enter the number :");
scanf("%d",&n);
int size =2*n-1;
for(int i=0;i<size;i++){
for (int j=0;j<size;j++){
int min=i<(size-i-1)?i :(size-i-1);
int min_j=j<(size-j-1)?j :(size-j-1);
int min_di=min<min_j?min:min_j;
printf("%d",n-min_di);
}
printf("\n");
}
return 0;
}
