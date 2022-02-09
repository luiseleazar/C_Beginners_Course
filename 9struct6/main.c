#include<stdio.h>
#include<stdlib.h>
#define recno 4
struct emp
{
    int empid;
	char name[10],design[15];
	int sal;
}e1[recno],e2[recno],e3[recno],e4[recno],e5[recno];
int main()
{
	int i,j,c,ch2,left,id,d,flag=0,ch,ch1,flag2=0,iden,wish;;
	printf("\n\n\tENTER EMPLOYEE DETAILS\n");
	printf("\t***********************\n");
	for(i=0;i<2;i++)
	{	printf("enter id : ");
		scanf("%d",&e1[i].empid);
		printf("enter name : ");
		scanf("%s",e1[i].name);
		printf("enter designation : ");
		scanf("%s",e1[i].design);
		printf("enter salary : ");
		scanf("%d",&e1[i].sal);
	}
	printf("\nTHE STRUCTURE CONTAINS\n");
	for(j=0;j<i;j++)
	{
		printf("%d\t%s\t%s\t%d\n",e1[j].empid,e1[j].name,e1[j].design,e1[j].sal);
	}
	do
	{
		printf("\nMENU\n\n-----");
		printf("\n1.ADD\n2.DELETE\n3.MODIFY\n4.EXIT\nENTER YOUR CHOICE : ");
		scanf("%d",&ch2);

		switch(ch2)
		{	case 1:
			{       printf("\nTHE STRUCTURE CONTAINS\n");
				for(j=0;j<i;j++)
				{
					printf("%d\t%s\t%s\t%d\n",e1[j].empid,e1[j].name,e1[j].design,e1[j].sal);
				}
				do
				{	if(i==recno)
					{	printf("\n\nSTRUCT FULL CANNOT ADD MORE RECORDS");ch=0;getchar();break;}
					else
					{
						printf("\nDO YOU WISH TO ADD RECORDS,IF YES PRESS 1 : ");
						scanf("%d",&ch);
						if(ch==1)
						{
						    for(j=0;j<i;j++)
							{
							    e2[j]=e1[j];
                            }
							printf("enter id : ");
							scanf("%d",&e2[j].empid);
							printf("enter name : ");
							scanf("%s",e2[j].name);
							printf("enter designation : ");
							scanf("%s",e2[j].design);
							printf("enter salary : ");
							scanf("%d",&e2[j].sal);
							i++;
							printf("\nTHE STRUCTURE CONTAINS\n");
							for(j=0;j<i;j++)
							{
							    e1[j]=e2[j];
								printf("\n%d\t%s\t%s\t%d",e1[j].empid,e1[j].name,e1[j].design,e1[j].sal);
							}
						}
						else
                            break;
					 }
				}while(ch==1);
			}
			break;
			case 2:
			{
				d=i;
				do
				{       printf("\nTHE STRUCTURE CONTAINS\n");
					for(i=0;i<d;i++)
					{	printf("%d\t%s\t%s\t%d\n",e1[i].empid,e1[i].name,e1[i].design,e1[i].sal);
					}
					printf("\nENTER ID FOR DELETING RECORDS : ");
					scanf("%d",&id);

					for(j=0;j<d;j++)
					{	if((e1[j].empid)==id)
						{flag=1;}
					}

					if(flag==1)
					{      	left=i-1;
						printf("\n\nNUMBER OF RECORDS LEFT : %d\n",left);
						for(j=0;j<i;j++)
						{       e2[j]=e1[j];	}
						for(j=0,c=0;j<i;j++,c++)
						{       if((e2[j].empid)==id)
							{	e3[j]=e2[c+1];c++;	}
							if((e2[j].empid)!=id)
							{	e3[j]=e2[c];            }
						}
						i--;
						if(left>0)
						{	printf("\nTHE STRUCTURE CONTAINS :\n");
							for(j=0;j<i;j++)
							{       e1[j]=e3[j];
								printf("%d\t%s\t%s\t%d\n",e1[j].empid,e1[j].name,e1[j].design,e1[j].sal);
							}
						}
						x:
						if(d==0||left==0)
						{	printf("\n STRUCT IS EMPTY\n");break;   	}
						printf("\n\nDO YOU WISH TO DELETE MORE RECORDS, IF YES PRESS 1 : ");
						scanf("%d",&ch1);
						flag=0;
						d=i;

					}
					else
					{	printf("\nID DOESNT EXIST");goto x;	}
				}while(ch1==1&&(d>0));
			}
			break;
			case 3:
			{
				if(left==0)
				{	printf("\nSTRUCTURE CANNOT BE MODIFIED B'COZ IT IS EMPTY ");
					break;
				}
				printf("\nTHE STRUCTURE CONTAINS\n");
				for(j=0;j<i;j++)
				{       e5[j]=e1[j];
					printf("%d\t%s\t%s\t%d\n",e5[j].empid,e5[j].name,e5[j].design,e5[j].sal);
				}
				do
				{
					printf("\nENTER THE ID NUMBER OF THE EMPLOYEE FOR MODIFICATION");
					scanf("%d",&iden);
					for(j=0;j<i;j++)
					{	if(e5[j].empid==iden)
						{	printf("enter id : ");
							scanf("%d",&e5[j].empid);
							printf("enter name : ");
							scanf("%s",e5[j].name);
							printf("enter designation : ");
							scanf("%s",e5[j].design);
							printf("enter salary : ");
							scanf("%d",&e5[j].sal);
							flag2=1;
						}
					}
					if(flag2==0)
					{	printf("\nSPECIFIED ID DOESNT EXIST");goto y;}
					printf("\nTHE STRUCTURE CONTAINS\n");
					for(j=0;j<i;j++)
					{       e1[j]=e5[j];
						printf("%d\t%s\t%s\t%d\n",e1[j].empid,e1[j].name,e1[j].design,e1[j].sal);
					}
					y:
					printf("\nDO YOU WISH TO MODIFY THE RECORD, IF YES PRESS 1 : ");
					scanf("%d",&wish);
				}while(wish==1);
			}
			break;
			case 4:exit(0);break;
			default:printf("\nINCORRECT CHOICE\n");break;
		}
	}while(ch2==1||ch2==2||ch2==3);
	getchar();
	return(0);
}
