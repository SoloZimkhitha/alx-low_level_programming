#include <stddef.h>
/**
 * array_iterator - iterates through an array
 * @array: parameter of tyoe int pointer
 * @size: size of array
 * @action: parameter of type function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
