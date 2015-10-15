#include <stdio.h>
#include <ctype.h>
#define NAMESIZE 20
#define LINESIZE 512

int is_valid_name(const char s[]);
int get_name(char fistname[], char lastname[]);

int main(void)
{
	char f[NAMESIZE];
	char l[NAMESIZE];
	get_name(f, l);
	
	/* char s1[] = "Alex";
	char s2[] = "-Alex";
	char s3[] = "Alex-";
	char s4[] = "a";
	char s5[] = "asdf";
	char s6[] = " ";
	
	printf("function return: %d", is_valid_name(s1));
	printf("\n");
	printf("function return: %d", is_valid_name(s2));
	printf("\n");
	printf("function return: %d", is_valid_name(s3));
	printf("\n");
	printf("function return: %d", is_valid_name(s4));
	printf("\n");
	printf("function return: %d", is_valid_name(s5));
	printf("\n");
	printf("function return: %d", is_valid_name(s6));
	printf("\n");
	*/
	
	return 0;
}

/* validates names */
int is_valid_name(const char s[])
{
	int i;
	
	/* checks length, more than 2 less than 20 */
	if(strlen(s) < 2 || strlen(s) > 20)
	{
		printf("Error: length not valid.\n");
		return 0;
	}
	
	/* checks first character and last character*/
	if(s[0] == '-' || s[strlen(s) - 1] == '-')
	{
		printf("Error: invalid start or end character.\n");
		return 0;
	}
	
	for(i = 0; i < strlen(s); i++)
	{
		/* checks if characters are alpha characters */
		if(!isalpha(s[i]) && s[i] != '-')
		{
			rintf("Error: invalid character.\n");
			return 0;
		}
	}
	return 1;
}

/* prompts user for first name and last name */
int get_name(char firstname[], char lastname[])
{
	char line[LINESIZE];
	char fname[NAMESIZE];
	char lname[NAMESIZE];
	int i = 0;
	while(i == 0)
	{
		printf("enter your first name: \n");
		/* if we can't read */
		fgets(line, LINESIZE, stdin);
		if(sscanf(line, "%s%s", &fname, &lname) == EOF)
		{
			printf("EOF found");
			return 0;
		}
			
		printf("you typed: %s %s\n", fname, lname);
		
		if(is_valid_name(fname) == 1 && is_valid_name(lname) == 1)
		{
			strcpy(firstname, fname);
			strcpy(lastname, lname);
			return 1;
		}	
		i++;
	}
	
	return 1;
}


