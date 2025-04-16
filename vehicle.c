#include <stdio.h>
#include <stdlib.h>
#include "vehicle.h"

Vehicle queue[MAX_QUEUE];
intfront = 0, rear = -1;

void addVehicle(){
    if (rear < MAX_QUEUE- 1){
        rear++;
        queue[rear].id = rear;
        queue[rear].direction = rand() %4;
        queue[rear].turning = rand() %3;
        printf("Vehicle %d added (Direction: %d, Turn: %d)\n",
            queue[rear].id, queue[rear].direction, queue[rear].turning)
    } else {
        printf("Queue is full. Cannot add more vehicles.\n")
    }
}

voidupdatevehicles(int light ){
    if (light == 1 && front <= rear) {
        printf("Vehicle %d passed the light.\n", queue[front].id);
        front++;
    } else if (light == 0) {
        printf("Red light. Vehicles must wait.\n");
    } else if (front > rear) {
        printf("No vehicles in the queue.\n");

    }
}
void printVehicleQueue() {
    if (front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Current vehicle queue:\n");
    for (int i = front; i <= rear; i++) {
        printf("  Vehicle ID: %d | Direction: %d | Turn: %d\n",
               queue[i].id, queue[i].direction, queue[i].turning);
    }
}