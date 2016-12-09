#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 100
void prompt(char* command);
void transport(char command1[], char (*command2)[MAX]);
void normalcommand_excute(char * command);
void mycommand_excute(char (*command)[MAX]);
void mymkfs(char (*comand)[MAX]);
void myls(char (*command)[MAX]);
void mycat(char (*command)[MAX]);
void myshowfile(char (*command)[MAX]);
void mypwd(char (*command)[MAX]);
void mycd(char (*command)[MAX]);
void mycp(char (*command)[MAX]);
void mycpto(char (*command)[MAX]);
void mycpfrom(char (*command)[MAX]);
void mymkdir(char (*command)[MAX]);
void myrmdir(char (*command)[MAX]);
void myrm(char (*command)[MAX]);
void mymv(char (*command)[MAX]);
void mytouch(char (*command)[MAX]);
void myshowinode(char (*command)[MAX]);
void myshowblock(char (*command)[MAX]);
void mystate(char (*command)[MAX]);
void mytree(char (*command)[MAX]);
int main ( )
{
	char command1[MAX]={0};
	char command2[MAX][MAX]={0};
	while(1)
	{	
		prompt(command1);
		transport(command1,command2);
		if(strcmp(command1,"byebye")==0)
		{
			printf("exit");
			exit(0);
		}
		if(strcmp(command2[0],"my")==0)
			mycommand_excute(command2);
			
		else
			 normalcommand_excute(command1);
	}
	}
void transport(char command1[], char (*command2)[MAX])
{
	int i=0,j=0,h=-1;
	while(command1[++h] != 0)
	{
		command2[i][j++]=command1[h];
		if(command1[h]==' ')
		{
			command2[i][j-1]=0;
			i++;
			j=0;
		}
	

	}
}
	void mycommand_excute(char(*command)[MAX])
{
	if(strcmp(command[0],"myfs")==0)
	{
		mypwd(command);
	}
	else if(strcmp(command[0],"myls")==0)
	{
		myls(command);
	}
	else if(strcmp(command[0],"mycat")==0)
	{
		mycat(command);
	}
	else if(strcmp(command[0],"myshowfile")==0)
	{
		myshowfile(command);
	}
	else if(strcmp(command[0],"mypwd")==0)
	{
		mypwd(command);
	}
	else if(strcmp(command[0],"mycd")==0)
	{
		mycd(command);
	}
	else if(strcmp(command[0],"mycp")==0)
	{
		mycp(command);
	}
	else if(strcmp(command[0],"mycpto")==0)
	{
		mycpto(command);
	}
	else if(strcmp(command[0],"mycpfrom")==0)
	{
		mycpfrom(command);
	}
	else if(strcmp(command[0],"mymkdir")==0)
	{
		mymkdir(command);
	}
	else if(strcmp(command[0],"myrmdir")==0)
	{
		myrmdir(command);
	}
	else if(strcmp(command[0],"myrm")==0)
	{
		myrm(command);
	}
	else if(strcmp(command[0],"mymv")==0)
	{
		mymv(command);
	}
	else if(strcmp(command[0],"mytouch")==0)
	{
		mytouch(command);
	}
	else if(strcmp(command[0],"myshowinode")==0)
	{
		myshowinode(command);
	}
	else if(strcmp(command[0],"myshowblock")==0)
	{
		myshowblock(command);
	}
	else if(strcmp(command[0],"mystate")==0)
	{
		mystate(command);
	}
	else if(strcmp(command[0],"mytree")==0)
	{
		mytree(command);
	}
	else
	{
		printf("check your command \n");
	}
}
	void normalcommand_excute(char* command)
	{
	system(command);
	}
void prompt(char* command)
{
	char* buffer=NULL;
	printf("[%s]$:",getcwd(buffer,MAX));
	gets(command);
}
	void mymkfs(char (*command)[MAX])
{

}
void myls(char (*command)[MAX])
{
	

}
	void mycat(char (*command)[MAX])
{


}
void myshowfile(char (*command)[MAX])
{

}
void mypwd(char(*command)[MAX])
{
	char* buffer=NULL;
	printf("%s \n",getcwd(buffer,MAX));

}
void mycd(char (*command)[MAX])
{

}
void mycp(char (*command)[MAX])
{

}
void mycpto(char (*command)[MAX])
{

}
void mycpfrom(char (*command)[MAX])
{

}
void mymkdir(char (*command)[MAX])
{

}

void myrmdir(char (*command)[MAX])
{

}
void myrm(char (*command)[MAX])
{

}
void mymv(char (*command)[MAX])
{

}
void mytouch(char (*command)[MAX])
{
	FILE* fp;
	fp=fopen(command[1],"w");
}

void myshowinode(char (*command)[MAX])
{

}
void myshowblock(char (*command)[MAX])
{

}
void mystate(char (*command)[MAX])
{

}
void mytree(char (*command)[MAX])
{

}
