#include<iostream>
#include<string.h>
using namespace std;
int VoteCount(int count,int candnum)
{ int c[1000];
	for(int k=1; ;k++)
	{ for(int z=1;z<candnum;z++)
     { c[z]=0;
	   if(count==z)
	   c[z]++;
	   else if(count==50)
	   { char password[20]; 
		   cout<<"Enter password \n";
		   cin>>password;
		   if(strcmp(password,"later")==0)
		    { 
			  for (int p=0;p<candnum;p++)
			   { cout<<"\nNo of votes for candidate "<<p+1<<" is "<<c[p]<<"\n";
			}
		}
			else 
			   continue;
	   }
	   
	   
	   else
	     break;
	 }
  } 
	 return 0;
 }  	
		
using namespace std;				
int main()
{
	int Candnum,x;
	char Candname[20][50],pass[10];
	char Postname[50];
	cout<<"\nEnter Post:-\n";
	cin.getline(Postname,50);
	cout<<"\nEnter No. Of Candidates:-\n";
	cin>>Candnum;
	for(int i=0;i<Candnum;i++)
	{ 
		cout<<" \nEnter Candidate's Name:- \n";
	  cin>>Candname[i];
	}
	for(int j=0;j<Candnum;j++)
	cout<<"Candidate"<<j+1<<" is:-"<<Candname[j]<<"\n";
	cout<<"\nEnter The Candidates Respective Number To Vote\n";
	cin>>x;
	if(x==0)
	{ 
		cout<<"Enter Password";
	   cin>>pass;
	   if(strcmp(pass,"later")==0)
	   for(int i=0;i<Candnum;i++)
	   cout<<"Candidate"<<i+1<<"d";
	}

	return 0;
}
  
