#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,x=0;
    char t;

    
    while(1)
    {   
        printf("진행 하시겠습니까?\n");
        scanf(" %c",&t);
        if(t=='X'||t=='x')
            break;

            printf("a b c값을 입력하시오\n");
            scanf("%lf %lf %lf",&a,&b,&c);
    
        if(a==0)
        {
            if(b==0)
            {   
                printf("해가 존재 X\n");
            }
            else
            {
                printf("%f\n",-c/b);
            }
        
        }
        else if((b*b-4*a*c)<0)
        {
            printf("허근 입니다.\n");
        }
        else if((b*b-4*a*c)==0)
        {
            printf("중근 입니다. : ");
            printf("%f\n",-b/2*a);
        }
        else
            printf("%f %f\n",(-b+sqrt(b*b-4*a*c))/2*a,(-b-sqrt(b*b-4*a*c))/2*a);

    }
    return 0;
}