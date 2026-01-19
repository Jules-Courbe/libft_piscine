#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(FILE *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void parsing(FILE *f)
{
	char c;
	char *str = NULL;
	int i = 0;

	char *buffer = (malloc(sizeof(char) * ft_strlen(f) + 1));
	typedef struct
	{
		char *prenom;
		int age;
	} t_personne;
/*write each character present in the file*/
	while ((c = fgetc(f)) != EOF)
	{
		write(1, &c, 1);
		buffer[i] += c;
		i++;
	}
	printf("\n");
	buffer[i] = '\0';
	printf("%s", buffer);
	
/*convert text's file in string to brows it*/
	
}

int main(int argc, char **argv)
{
	FILE *f = fopen(argv[1], "r+");
	if (f == NULL)
	{
		printf("Erreur d'ouverture du fichier");
		return (1);
	}
	else
	printf("Le fichier a ete ouvert avec succes\n");
	parsing(f);
	fclose(f);
} 
