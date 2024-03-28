#include<stdio.h>
#include<string.h>

void infile(FILE *f,int &n,int a[10])
{
	if(f !=NULL)
	{
		fscanf(f,"%d",&n);
		for(int i=0;i<n;i++)
		{
		fscanf(f,"%d",&a[i]);
	}
}
    else
    {
    	printf("\nOpen file faill!");
    	
	}
}
void printfile(FILE* f,int n ,int a[10])
{
	if(f !=NULL)
	{
		printf("\n%d,n");
		for (int i=0;i<n;i++)
		{
			printf("\na[%d]: %d,i,a[1]");
		}
		
	}
	else
	{
		printf("\nOpen file faill!");
	}
}
void evenoddfile(FILE *f,FILE *p,int n,int a[10])
{
	if (f !=NULL)
	{
	fprintf(f,"\nThe even numbers:");
	fprintf(p,"The odd numbers:");
	for (int i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			fprintf(f,"%d",a[i]);
		}
		else 
		{
			fprintf(p,"%d",a[i]);
		}
	}
	}
}

int main()
{
	char file[100],fileadd[100];
	int a[10],n;
	strcpy(file,"bai1.txt");
	strcpy(fileadd,"odd1.txt");
	printf("File address: %s",file);
	FILE* f=fopen(file,"r+");
	FILE* p=fopen(fileadd,"w");
	infile(f,n,a);
	printfile(f,n,a);
	evenoddfile(f,p,n,a);
	printf("\nThe odd numbers will print in this file: %s",fileadd);
	fclose(f);
	fclose(p);
	return 0;
}
