// const int *pi; == int const *pi;

int main() {
	int j;
	int * const pi=&j;

	// Interdit

	char *pc;
	const char **ppc;
	ppc = &pc;   /* Interdit ! */

	
}
