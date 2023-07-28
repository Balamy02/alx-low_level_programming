/* This function prints all the elements of a list_t list. */
size_t print_list(const list_t *h)
{
	/* Initialize a counter to keep track of the number of nodes printed. */
	size_t s = 0;

	/* Iterate through the list, printing each node. */
	while (h)
	{
		/* If the node's string is NULL, print "[0] (nil)". */
		if (!h->str)
			printf("[0] (nil)\n");
		/* Otherwise, print "[%u] %s\n". */
		else
			printf("[%u] %s\n", h->len, h->str);

		/* Increment the counter and move to the next node. */
		s++;
		h = h->next;
	}

	/* Return the number of nodes printed. */
	return (s);
}

