//Program to find the greatest of 3 no entered by user
#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter all 3 the numbers seperated by space:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if ((n1>=n2)&&(n1>=n3)) printf("%d is largest",n1);
    else if ((n2>n1)&&(n2>=n3)) printf("%d is largest",n2);
    else printf("%d is largest",n3);
    return 0;
}