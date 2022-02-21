#include <stdio.h>
#include <cs50.h>
#include <string.h>
int encrypter(int option);
int main(void)
{

	int option=get_int("What do you want to do 1.encrypt a message , 2.decrypt a message: ");


	 encrypter(option);

}
int encrypter(int option)
{	
	if (option==1)
	{
		string message=get_string("What is your message: ");
		for (int i=0; i<strlen(message); i++)
		{
			int b = message[i]-7;
			char f = (char) b ;
			printf("%c" , f );






		}
		printf("\n");

		
			
	}

	else if (option==2 )
	{
		string message=get_string("What is your message: ");

		for (int i=0; i<strlen(message); i++)
		{
			int c=message[i]+7;
			char k = (char) c;
			printf("%c" , k );
		}
		printf("\n");


		
	}
	return 0;	
	
}
