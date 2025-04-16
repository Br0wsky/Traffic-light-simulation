#ifndef VEHICLE_H
#define VEHICLE_H

#define MAX_QUEUE 10

typedef struct{
    int id;
    int direction;
    int turning;

} Vehicle;

void addvehicle();
void updatevehicles(int light);
void printVehiclesQueue();

#endif



