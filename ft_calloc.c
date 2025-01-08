

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*temp;

	temp = (void *) malloc(n * size);
	if (temp == NULL)
		return (NULL);
	ft_memset(temp, 0, n * size);
	return (temp);
}
/*
#include <stdio.h>
int main() 
{
    int *numbers = (int *)ft_calloc(10, sizeof(int));
    if (numbers == NULL) {
        printf("Falha na alocação de memória.\n");
        return (1);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    free(numbers);

    return 0;
}
*/
