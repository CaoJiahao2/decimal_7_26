#include <stdio.h>
int f1(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    for (int i = 10; i < 101; i++) {
        if(i%3==a && i%5==b && i%7==c){
            printf("the are %d men in total!\n",i);
            return 0;
        }
    }
    printf("No answer");
    return 0;
}

int main()
{
    int a, b, c, ct = 1,i,temp;
    while(3 == scanf("%d%d%d", &a, &b, &c))
    {
        if(a==0&&c==0&&b==0)break;
        if(b==0){
            printf("b=0,error!\n");
            continue;}
        int integar=a/b;
        printf("case %d: %d.",ct++,integar);
        a%=b;a*=10;
        for(i=1;i<c;i++){
            printf("%d",(int )a/b);
            a%=b;a*=10;
        }
        temp=a/b;a%=b;a*=10;i=a/b;
        printf("%d\n",i>4?temp+1:temp);
    }
    return 0;
}
