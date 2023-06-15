#include <unistd.h>

int main(void)
{
	char art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, art, 59);

	return (1);
}
