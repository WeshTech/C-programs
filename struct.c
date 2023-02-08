#include <stdio.h>
struct Details
{
	int reg_number;
	float id;
	char name[30];
}
int main()
{
	struct details employee[5] =
	{563, 410.29467, "david waweru"},
	{674,4763.3398, "michael olumba"},
	{4657,445.5433, "joyce onyanchama"},
	{8754,45.45, "otovon bismark"},
	{34343,7667.5,"dennis oyumba"};
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%\n1d" %4.2f %-20s ",employee[i].reg_number,employee[i].id,employee[i].name);
	}




}
