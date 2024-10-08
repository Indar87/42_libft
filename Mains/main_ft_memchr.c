#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char s[] = "Hola, Mundo!";
	char *result;

	// Caso 1: Buscar el carácter 'M' en los primeros 12 bytes
	result = ft_memchr(s, 'M', 12);
	if (result)
		printf("Caso 1 - Carácter encontrado: %s\n", result);
	else
		printf("Caso 1 - Carácter no encontrado.\n");

	// Caso 2: Buscar el carácter 'H' en los primeros 5 bytes
	result = ft_memchr(s, 'H', 5);
	if (result)
		printf("Caso 2 - Carácter encontrado: %s\n", result);
	else
		printf("Caso 2 - Carácter no encontrado.\n");

	// Caso 3: Buscar el carácter 'Z' (que no está en la cadena)
	result = ft_memchr(s, 'Z', 12);
	if (result)
		printf("Caso 3 - Carácter encontrado: %s\n", result);
	else
		printf("Caso 3 - Carácter no encontrado.\n");

	// Caso 4: Buscar el terminador nulo '\0'
	result = ft_memchr(s, '\0', 13);  // 13 bytes incluyen el '\0'
	if (result)
		printf("Caso 4 - \0 encontrado en: %ld\n", result - s);
	else
		printf("Caso 4 - Terminador nulo no encontrado.\n");

	return (0);
}
