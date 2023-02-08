#include <stdio.h>
struct employee
{
	int id;
	int years;
	double rate;
	double hours;
	
};
main()
{
	printf("kindly fill atleast a record in the structure and click enter to proceed\n\n\n");
	struct employee david = {11257, 32, 80.67975,8.5467};
	double netpay;
	double holder(struct employee);
	netpay = holder(david);
	printf("The net salary of the employee called David is %f",netpay);
	
}
holder(struct employee temp)
{
	return (temp.rate * temp hours);
}
