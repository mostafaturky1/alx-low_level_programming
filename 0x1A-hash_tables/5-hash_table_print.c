#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pr;
	unsigned long int i;
	int flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		pr = ht->array[i];
		while (pr != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("%s : %s", pr->key, pr->value);
			flag = 1;
			pr = pr->next;
		}
	}
	printf("}\n");
}
