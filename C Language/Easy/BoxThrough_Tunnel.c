  
/*
 *  Author: El-Gharib
 *  Created on: 16/2/2021
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct
{
    int length;
    int width;
    int height
}box;

int is_lower_than_max_height(box boxes)
{
    int i;
    return boxes.height <41 ? 1:0;
}
int get_volume(box boxes)
{
    return boxes.height * boxes.width * boxes.length; 
}



int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}