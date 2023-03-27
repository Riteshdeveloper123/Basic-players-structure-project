#include<stdio.h>
#include<string.h>

typedef struct player
{
	char name[20];
	int match;
	int run;
	int wicket;
	int catch;
	int strikrate;
	
}player;


void storevalue(player*,int);
void matches(player*,int);
void runs(player*,int);
void catches(player*,int);
void strikrates(player*,int);
void wickets(player*,int);

void main()
{
	player arr[2];
	
	printf("\n We are storing value in array");
	printf("\n");
    storevalue(arr,2);
	
	
	int choice=0;
	while(choice!=10)
	{   
		printf("\n 1.If you want to find who is played maximum matches then press 1");
	    printf("\n 2. if you want to find who is score maximum runs then press 2");
	    printf("\n 3.if you want to find who takes maximum wickets then press 3");
	    printf("\n 4.if you want to find who is takes maximum catches then press 4 ");
	    printf("\n 5.if want to find whoes strickrate is maximum then press 5");
	    printf("\n If you want to exit the program then press 10");
	    printf("\n");	 
	    scanf("%d",&choice);
	    
	    
	     switch(choice)
	     {
	     	 case 1:
	     	 	{
	     	 	    matches(arr,2);
				}
				break;
			case 2:
				{
					runs(arr,2);
				}
				break;
			case 3:
				{
				   wickets(arr,2);
				}
				break;
		    case 4:
		    	{
		    		catches(arr,2);
				}
				break;
			case 5:
				{
					strikrates(arr,2);
				}
				break;
		 }
	    
	}
	
	
}


void storevalue(player* ptr,int t)
{
	int i=0;
	for(i=0;i<t;i++)
	{
		printf("\n Enter the name of player");
		scanf("%s",&ptr[i].name);
		printf("\n How many matches he played");
		scanf("%d",&ptr[i].match);
		printf("\n enter the runs he scores");
		scanf("%d",&ptr[i].run);
		printf("\n enter the wickets he taken");
		scanf("%d",&ptr[i].wicket);
		printf("\n enter the catches he is took");
		scanf("%d",&ptr[i].catch);
		printf("\n enter the strikerate of players");
		scanf("%d",&ptr[i].strikrate);
	}
}  

void matches(player*ptr,int t)
{
	  char pname[20];
	  strcpy(pname,ptr[0].name);
	
	  int maxmatch=ptr[0].match;
	  int i;
	  for(i=0;i<t;i++)
	  {
	  	if(ptr[i].match>maxmatch)
	  	{
	  		maxmatch=ptr[i].match;
	  	    strcpy(pname,ptr[i].name);	        
		}
	  }
	  
	  printf("\n name of player is :%s And He played maximum matches then others :%d",pname,maxmatch);
	  printf("\n");	    
}

void runs(player*ptr,int t)
{
	  char pname[20];
	  strcpy(pname,ptr[0].name);
	  
	  int maxrun=ptr[0].run;
	  
	  int i;
	  for(i=0;i<t;i++)
	  {
	  	 if(ptr[i].run>maxrun)
	  	 {
	  	 	maxrun=ptr[i].run;
	  	 	strcpy(pname,ptr[i].name);
		 }
	  }
	  printf("\n Name of player is :%s and he score maximum runs than others is :%d",pname,maxrun);
	  printf("\n");	 
}


void wickets(player*ptr,int t)
{
	  char pname[20];
	  strcpy(pname,ptr[0].name);
	  
	  int maxwickets=ptr[0].wicket;
	  
	  int i;
	  for(i=0;i<t;i++)
	  {
	  	if(ptr[i].wicket>maxwickets)
	  	{
	  		maxwickets=ptr[i].wicket;
	  	    strcpy(pname,ptr[i].name);
		}
	  }
	  printf("\n name of player is :%s and he takes maximum wickets than other players :%d",pname,maxwickets);
	  printf("\n");	 
}



void catches(player*ptr,int t)
{
	  int maxcatch=ptr[0].catch;
	  char pname[10];
	  strcpy(pname,ptr[0].name);
	  int i;
	  for(i=0;i<t;i++) 
	  {
	  	if(ptr[i].catch>maxcatch)
	  	{
	  		 maxcatch=ptr[i].catch;
	  		 strcpy(pname,ptr[i].name);
		}
	  }
	  printf("\n name of player is :%s and he took maximum catches than other is :%d",pname,maxcatch);
	  printf("\n");	 
}

void strikrates(player*ptr,int t)
{
	 char pname[10];
	 strcpy(pname,ptr[0].name);
	 
	 int maxsrate=ptr[0].strikrate;
	 
	 int i;
	 for(i=0;i<t;i++)
	 {
	   if(ptr[i].strikrate>maxsrate) 
	   {
	   	  maxsrate=ptr[i].strikrate;
	   	  strcpy(pname,ptr[i].name);
	   }       	
	 }
	 printf("\n Name of player is :%s and his strikrate is maximum than others :%d",pname,maxsrate);
	 printf("\n");	 
}
