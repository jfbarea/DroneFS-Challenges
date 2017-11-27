#include <time.h>
#include <stdlib.h>
#include <stdio.h>
float routeGenerator(void);
float calculateTile(float);
int main(){
	float route = routeGenerator();
	float tile = calculateTile(route);
	printf("Route: %.6f\n", route);
	printf("Tile: %.6f\n", tile);
	return 0;
}

float routeGenerator() {
	srand(time(NULL));
	int r = rand();
	return r;
}

float calculateTile(float route){
 return route * 2;
}
