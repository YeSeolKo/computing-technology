#include<stdio.h>
int main()
{ 

	int time,people;
	int i;        //갯수
    int age;
	int price;
	int sum=0;

	printf("현재시간 입력 (0~23시) : \n");
	scanf("%d",&time);

	printf("가족 인원 수 입력: \n"); //갯수
	scanf("%d",&people);

	for(i=1;i<=people; i++)
	{
		printf("%d번째 사람 나이 입력: \n",i);
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
	   printf("요금은 %d입니다.\n",price);}

	printf("가족의 요금은 %d 입니다.\n",sum);

	getchar();
	getchar();
	return 0;
}






	