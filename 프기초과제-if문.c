#include<stdio.h>
int main()
{ 

	int time,people;
	int i;        //����
    int age;
	int price;
	int sum=0;

	printf("����ð� �Է� (0~23��) : \n");
	scanf("%d",&time);

	printf("���� �ο� �� �Է�: \n"); //����
	scanf("%d",&people);

	for(i=1;i<=people; i++)
	{
		printf("%d��° ��� ���� �Է�: \n",i);
	    scanf("%d",&age);
       {if(age<3) {price=0;}

	  else if (time<17)
	  {
		   if ( 3<=age<=12) price=25000;
		   else if(age>=65) price=25000;
		   else  price=34000;
	   }
	  

	   else if(time>=17)	{price=10000;}
	} 

	   sum= sum+price;
	   printf("����� %d�Դϴ�.\n",price);}

	printf("������ ����� %d �Դϴ�.\n",sum);

	getchar();
	getchar();
	return 0;
}






	