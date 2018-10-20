//broker

#include <stdio.h>

int main()
{
	int trade;
	float cms;

	printf("Enter value of trade: ");
	scanf("%d", &trade);

	if(trade < 2500)
	{
		cms = 30+0.017*trade;
	}else if(trade < 6250){
		cms = 56+0.0066*trade;
	}else if(trade < 20000){
		cms = 76+0.0034*trade;
	}else if(trade < 50000){
		cms = 100+0.0022*trade;
	}else if(trade < 500000){
		cms = 155+0.0011*trade;
	}else{
		cms = 255+0.0009*trade;
	}
	if(cms<39) cms = 39;

	printf("Commission: $%.2f\n", cms);
	return 0;
}