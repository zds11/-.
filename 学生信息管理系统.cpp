#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int stuID;
	char stuName[20];
	int stuAge;
	char stuGen[2];
	struct Student * next;
}student[500];

int main()
{
	int x=0,a,b,c=0,i=0,j=0;
	char y[100],d[100];
	struct Student *header;
	header=NULL;//��ǰ�Ľڵ���ָ����һ���ڵ��ָ�����ֵ��ԶΪNULL 
	struct Student *p;
	printf("��ӭ����ѧ����Ϣ����ϵͳ\n");
	
	while(1)
	{
		printf("����ѧ����Ϣ�밴1\n");
		printf("��ѯѧ����Ϣ�밴2\n");
		printf("ɾ��ѧ����Ϣ�밴3\n");
		printf("��ӡ����ѧ����Ϣ�밴4\n"); 
		printf("�˳�ϵͳ�밴5\n");
		scanf("%d",&x) || scanf("%s",&y); //��ֹ�û���Ч����  
		if(x==1)
		{
			printf("����������ѧ����ѧ�ţ����������䣬�Ա�(�ÿո����)\n");
			scanf("%d %s %d %s",&student[i].stuID,&student[i].stuName,&student[i].stuAge,&student[i].stuGen); 
			switch(i)//�������� 
			{
				case 0: header =&student[i];
						student[i].next=NULL;
						break;
				default : student[i-1].next=&student[i];
						  student[i].next=NULL;
						  break;
			}
			i++;
			system("CLS");//������Ļ ,���������ѧ����Ϣ 
			printf("��Ϣ¼��ɹ�\n");
		}
		else if(x==2)
		{
			printf("���������ѯ��ѧ����ѧ��:\n");
			scanf("%d",&a);
			p=header; 
			while(p!=NULL)
			{
				if((*p).stuID==a)
				{
					printf("����:%s ����:%d �Ա�:%s\n",(*p).stuName,(*p).stuAge,(*p).stuGen);
					break;
				}
				else
					p=p->next;
			}
		}
		else if(x==3)	
		{
			printf("�������ɾ��ѧ����ѧ��:\n");
			scanf("%d",&b);
			p=header;
			while(p!=NULL)
			{
				if(b==student[0].stuID)//ɾ����ѧ����ϢΪ��һ�� 
				{
					header=NULL;
					printf("ɾ���ɹ�\n");
					break;
				}
				else if(p->stuID==b)//ɾ����ѧ����Ϣ��Ϊ��һ�� 
				{
					student[j-1].next=student[j].next;
					student[j].next=NULL;
					printf("ɾ���ɹ�\n");
						break;
				}
				else
				{
					p=p->next;
					j++;
				}
			}
		}
		else if(x==4)
		{
			printf("�Ƿ�ѡ��������Ļ������ʾ?(1��ʾͬ�⣬�����������ʾ�ܾ�)\n");
			scanf("%d",&c) || scanf("%s",&d);
			if(c==1)
				system("CLS");
			p=header;
			while(p!=NULL)
			{
				printf("ѧ��:%d ����:%s ����:%d �Ա�:%s\n",p->stuID,p->stuName,p->stuAge,p->stuGen);
				p=p->next;
			}
		}
		else if(x==5)
		{
			break;
		}
		else
		{
			printf("�����������,����������\n");
			continue;	
		}
	}
	return 0;
}

