#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockScissorsPaper(int  com);
int winLoseDraw(int player, int opponent);


int rockScissorsPaper() {
	int opponent;
	opponent = rand()%3+1 ;
	if( opponent ==1) {return 1;}
	else if( opponent ==2) {return 2;}
	else if( opponent ==3) {return 3;}
}



int winLoseDraw(int player, int opponent){
	if( player ==1)
	{if(opponent==1) return 0;

	if(opponent==2) return -1;

	if(opponent==3) return 1;
	}

	else if(player==2) {
		if(opponent==2) return 0;
		if(opponent==3)return-1;
		if(opponent==1) return 1;
	}

	else if(player==3){
		if(opponent==3) return 0;
		if(opponent==1)return-1;
		if(opponent==2) return 1;
	}
}

	//����
	int main()
	{ 
		int player;
		int opponent;

		int i,result;

		srand((unsigned int)time(0));

		printf("����(1), ����(2), ��(3) �Է�, �������� 0 :");
		scanf("%d",&player);

		if(player==0)
			return 1;//��������

		if((player>=1)&&(player<=3)){
			while (player){
				opponent = rockScissorsPaper();

				result = winLoseDraw(player, opponent);

				if (result == 1)//�̱�

				{printf("��� = %d, ��ǻ�� = %d : �̰���ϴ�.\n", player, opponent);}

				else if (result == 0)//���

				{printf("��� = %d, ��ǻ�� = %d : �����ϴ�.\n", player, opponent);}

				else if (result == -1)//��

				{printf("��� = %d, ��ǻ�� = %d : �����ϴ�.\n", player, opponent);}


				printf("����(1), ����(2), ��(3) �Է�, �������� 0:");

				scanf("%d", &player);

			}

		}


		return 0;
	}