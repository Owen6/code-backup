//Project 2

#include <stdio.h>

int main()
{
	//variables
	int budget,volOne,volTwo,volThree,colOne,colTwo,colThree,hold=0;
	
	printf("Enter volumes and price per volume for collection 1: ");
	scanf("%d %d",&volOne,&colOne);
	printf("Enter volumes and price per volume for collection 2: "); 	
	scanf("%d %d",&volTwo,&colTwo);
	printf("Enter volumes and price per volume for collection 3: ");
	scanf("%d %d",&volThree,&colThree);
	printf("Enter Bob's budget: ");
	scanf("%d",&budget);
	int netCol = (colOne*volOne)+(colTwo*volTwo)+(colThree*volThree);

	//Part 1
	if(budget > 0) {
		printf("(1) Bob has some money to buy collections\n");
	}else{
		printf("(1) Bob does not have enough money to buy anything.\n");
	}
	//Part 2
	if(((colOne>budget)&&(colTwo>budget))||((colOne>budget)&&(colThree>budget))||((colTwo>budget)&&(colThree>budget))) {
		printf("(2) At least two collections are more expensive than Bob's budget.\n");
		hold++;
	}else{
		printf("(2) At least two collections are cheaper than or equal to Bob's budget.\n");
	}
	//Part 3 
	if(colOne&&colTwo==colThree) {
		printf("(3) All the collections cost the same.\n");
	}else if(colOne==colTwo||colOne==colThree||colTwo==colThree) {
		printf("(3) Only two collections cost the same amount of money.\n");
	}else{
		printf("(3) No collections have the same price.\n");
	}
	//Part 4
	if(hold>0) {
		printf("(4) Only one collection is cheaper than or equal to Bob's budget.\n");
	}else{
		printf("(4) More than one collection is cheaper than or equal to Bob's budget or they are all more expensive.\n");
	}
	//Part 5
	if(netCol<budget) {
		printf("(5) Bob can buy all three collections.\n");
	}else if((colOne*volOne+colTwo*volTwo)<budget||(colOne*volOne+colThree*volThree)<budget||(colTwo*volTwo+colThree*volThree)<budget) {
		printf("(5) Bob can only buy two of the collections.\n");
	}else if((1/3)*netCol<budget) {
		printf("(5) Bob can only buy one collection.\n");
	}else{
		printf("(5) Bob cannot buy any collection.\n");
	}

	return 0;
}
