#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct USER{

	char *account;
	char *password;


};

int main(struct USER u)
{
	char acc[9] = "chopper";
	char pas[9] = "abc123";
	char instruction[33];	
	char login[23];
	char userpas[23];

	while(1){
		
		printf("Input instruction:");
		scanf("%s",instruction);

		if(!strcmp(instruction,"register")){
			while(1){
				printf("Input account:");
				scanf("%s",u.account);
				printf("\nInput password:");
				scanf("%s",u.password);
				continue;

			}
		}
		if(!strcmp(instruction,"login")){
			while(1)
			{
				printf("LOGIN:");
				scanf("%s",login);

				if(!strcmp(login,acc))
				{
					printf("\nPASSWORD:");
					scanf("%s",userpas);
					if(!strcmp(userpas,pas))
					{
						printf("Login Sccess!\n");
						break;
					}	
				}
			}
			continue;
		}

		if(!strcmp(instruction,"exit")){
			break;

		}

		if(!strcmp(instruction,"help")){

			printf("Input register:You can register your account.\n");
			printf("Input login:You can login your account.\n");
			printf("Input exit:You can exit the program.\n");
			continue;
		}

		return 0;
	}
}
