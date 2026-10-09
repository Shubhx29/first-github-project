#include<stdio.h>
int main (){
    int cp;
    printf("Enter the cost price : ");
    scanf("%d",&cp);
    int sp ;
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    if(sp>cp)
    printf("Profit is %d",sp-cp);
    if(sp<cp)
    printf("loss is %d",cp-sp);
    if(sp==cp)
    printf("no profit no loss ");



    return 0;
}