//a072: T101
#include <stdio.h>
#include <stdlib.h>

int main(){  
   printf("Learning C now!\n");
   printf("You will enjoy it");
   return 0;
}


//a073: T102
#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     double a, b, total;
     printf("�п�J��ӯB�I��:");
     scanf("%lf %lf", &a, &b);
     total=a+b;
     printf("total=%lf", total);
     return 0;
}


//a074: T103
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=100, j=200;
     double d=123.456;
     printf("%d+%d=%d\n", i, j, i+j);
     printf("d=%.1f\n", d);
     return 0;
     
}


//a075: T104
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int unit;
    double price=23.34;
    double total;
	scanf("%d", &unit); 
    total = unit*price;
     	printf("�аݱz�n�R�X�~ī�G��? ");
     	printf("�ڶR�F%d�~100%��ī�G��\n", unit);
     	printf("��F%lf��", total);
     return 0;
}


//a076: T105
#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int a, b, c, total;
    double average; 
    printf("�п�J�Ĥ@�Ӿ��? ");
    	scanf("%d", &a);
    printf("�п�J�ĤG�Ӿ��? ");
    	scanf("%d", &b); 
    printf("�п�J�ĤT�Ӿ��? ");
    	scanf("%d", &c);
    	
    total = a+b+c;
    average = (float)total/3;
    /*(float)�j���૬*/ 

    printf("%d+%d+%d=%d\n", a, b, c, total);
    printf("�����Ƭ�%.2lf", average);
return 0;
}


//a077: T106
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c, d ,x,y,z;
     printf("�п�J�Ĥ@�Ӿ��? ");
     	scanf("%d", &a);
     printf("�п�J�ĤG�Ӿ��? ");
    	 scanf("%d", &b); 
     printf("�п�J�ĤT�Ӿ��? ");
    	 scanf("%d", &c);
     printf("�п�J�ĥ|�Ӿ��? ");
    	 scanf("%d", &d);
	x=a+b;
	y=c+d;
	z=(x/2-y/2)%2;
     printf("�������l�Ƭ�%d\n", z);
     return 0;
}


//a078: T107
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c, d, e, f;
     printf("�п�J�Ĥ@�Ӿ��? ");
     	scanf("%d", &a);
     printf("�п�J�ĤG�Ӿ��? ");
     	scanf("%d", &b); 
     printf("�п�J�ĤT�Ӿ��? ");
   		scanf("%d", &c);
     printf("�п�J�ĥ|�Ӿ��? ");
   		scanf("%d", &d);
     printf("�п�J�Ĥ��Ӿ��? ");
     	scanf("%d", &e);
     printf("�п�J�Ĥ��Ӿ��? ");
    	scanf("%d", &f);

     printf("\n�V�k�a��\n");
     printf("%10d %10d %10d\n", a, b, c);
     printf("%10d %10d %10d", d, e, f);

     printf("\n\n�V���a��\n");
     printf("%-10d %-10d %-10d\n", a, b, c);
     printf("%-10d %-10d %-10d", d, e, f);

     return 0;
}


//a079: T108
#include <stdio.h>
#include <stdlib.h>

int main () 
{
double a, b, c, d, e, f;
printf("�п�J�Ĥ@�ӯB�I��: ");
	scanf("%lf", &a);
printf("�п�J�ĤG�ӯB�I��: ");
	scanf("%lf", &b); 
printf("�п�J�ĤT�ӯB�I��: ");
	scanf("%lf", &c);
printf("�п�J�ĥ|�ӯB�I��: ");
	scanf("%lf", &d);
printf("�п�J�Ĥ��ӯB�I��: ");
	scanf("%lf", &e);
printf("�п�J�Ĥ��ӯB�I��: ");
	scanf("%lf", &f);

printf("\n�V�k�a��\n");
printf("%10.2lf %10.2lf %10.2lf\n", a, b, c);
printf("%10.2lf %10.2lf %10.2lf\n", d, e, f);

printf("\n\n�V���a��\n");
printf("%-10.2lf %-10.2lf %-10.2lf\n", a, b, c);
printf("%-10.2lf %-10.2lf %-10.2lf\n", d, e, f);

return 0;
}


//a080: T109
#include <stdio.h>
#include <stdlib.h>

int main () {
     int score;

     printf("�п�J�z������: ");
     scanf("%d", &score);
     if (60<=score&&score<=100) 
	 {
          printf("�ή�");
     }
     else 
	 {
          printf("���ή�");
     }

     int x;
     printf("\n\n�п�Jx��: ");
     scanf("%d", &x);
     if (x%2==0)
	  {
          printf("%d�O����", x);
     }
     else 
	 {
		  printf("%d�O�_��", x);
     }
     return 0;
}


//
a081: T110
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c;
     printf("�п�J�ܼ�a����: ");
     	scanf("%d", &a);
     printf("�п�J�ܼ�b����: ");
     	scanf("%d", &b); 
     printf("�п�J�ܼ�c����: ");
     	scanf("%d", &c);
     printf("%d\n", 60<=a&&a<100);
     printf("%f\n", (b+1)/10.);
     printf("%d\n", a>c?a:c);
     return 0;
}


//a082: T201
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int i;
     printf("�п�Ji��: ");
     	scanf("%d", &i);
     if (i%2==0)
          printf("%d�O����\n", i);
     else 
          printf("%d�O�_��\n", i);
     return 0;
}


//a083: T202
#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int score, adjust;
     printf("�п�J����:");
     scanf("%d", &score);
     if (score >= 60)
          adjust = score+10;
     else 
          adjust = score+5;
     printf("�վ�᪺���Ƭ�%d", adjust);
     return 0;
}


//a084: T203
#include <stdio.h>
#include <stdlib.h>

int main () 
{
int floor; 
printf("�аݱz����@�h��(1-4): ");
scanf("%d", &floor);
switch (floor)
	 {
    case 1:
        printf("�z��b�@��\n");break;
    case 2:
        printf("�z��b�G��\n");break;
    case 3:
        printf("�z��b�T��\n");break;
    case 4:
        printf("�z��b�|��\n");break;
    default:
        printf("�z��J���Ӽh�����T\n");
    }
return 0;
}


//a085: T204
#include <stdio.h>
#include <stdlib.h>

int main () {
char ch; 
printf("�аݱz������:�H�r����ܤ��O�p�U�G\nU:��ܤj�ǥ͡AM:��ܬ�s�͡AP:��ܳդh�� ");
scanf("%c", &ch);
switch (ch) {
    case 'U':
    	printf("�z�O�j�ǥ�\n");break;
    case 'M':
        printf("�z�O��s��\n");break;
    case 'P':
        printf("�z�O�դh��\n");break;
    default:
        printf("�z��J���������T\n");break;
     }
return 0;
}


//a086. T205
#include <stdio.h>
#include <stdlib.h>

int main () 
{
int i, num;
int num1=0, num2=0, num3=0, num4=0, others=0;
for (i=1; i<=10; i++) {
    printf("\n�Z���Կ�H�p�U:\n1: �p��\n2: �p��\n3: �p��\n4: �p��\n");
    printf("�аݱz�n�����Կ�H(1-4):");
    scanf("%d", &num);
    switch (num) {
        case 1:
            num1++;
            break;
        case 2:
            num2++;
            break;
        case 3:
            num3++;
            break;
        case 4:
            num4++;
            break;
        default:
            printf("�z��J�����X�����T\n");others++;break;
        }
printf("�ثe�o����\n�p��:%d, �p��:%d, �p��:%d, �p��:%d, �o��:%d\n", 
num1, num2, num3, num4, others);
	}
return 0;
}


//a087. T206 
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0;
     while (i<100)
     {
        i++;
        total += i;
     } 
     printf("1�[��100���`�M:%d\n", total);
     return 0;
}


//a088. T207 
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0;
     while (i < 100)
     {
          
          i++;
          total += i;
     }
     printf("1�[��100���`�M:%d\n", total);
     return 0;
}


//a089. T208
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i, total=0; 
     for (i=1; i<=100; i++)
	    if(i%2==0)
         total += i;
     printf("1��100�����ƩM: %d\n", total);
     return 0;
}


//a090. T209
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0; 
     do {
          i++;
          if(i%2==1)
          total += i;
     } while (i<100);
     printf("1��100���_�ƩM: %d\n", total);
     return 0;
}


//a091. T210
#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=1, total=0; 
     do {
          i++;
          if(i%2==0)
          total += i;
     } while (i<=100);
     printf("1��100�����ƩM: %d\n", total);
     return 0;
}

