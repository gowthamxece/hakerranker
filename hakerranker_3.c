#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
int i=0,j=0;
    int max_and=0, max_or=0, max_nor=0;
    for (i=0; i<=n; i++)
    for (j=i+1;j<=n;j++)
    {
    int current_a  =i & j;
    int current_or =i | j;
    int current_nor= i^j;
    printf("%d%\nd\n%d",current_a,current_nor,current_or);
    if(current_a  < k && current_a> max_and)
    {
    max_and=current_a;
    }
    if (current_or< k && current_or>max_or)
    {
    max_or=current_or;
    }
    if (current_nor< k || current_or>max_nor)
    {
    max_nor=current_nor;
    }
  //Write your code here.
    }
    printf("%d%d%d",max_and,max_or,max_nor);
    }

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
