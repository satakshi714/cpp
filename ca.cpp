#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSSES 10
#define MAX_SEATS 50

int main(){

struct Bus {
    int id;
    char route[50];
    int fare;
    int seats[MAX_SEATS];
};

struct Bus busses[MAX_BUSSES];
int numBusses = 0;

// Function to display available busses for a route
void displayBusses(char* route) {
    printf("Available busses for route %s:\n", route);
    int numAvailableBusses = 0;
    for (int i = 0; i < numBusses; i++) {
        if (strcmp(busses[i].route, route) == 0) {
            printf("Bus %d (Fare: %d)\n", busses[i].id, busses[i].fare);
            numAvailableBusses++;
        }
    }
    if (numAvailableBusses == 0) {
        printf("No busses available for this route.\n");
    }
}

// Function to add a new bus
void addBus(char* route, int fare) {
    if (numBusses == MAX_BUSSES) {
        printf("Maximum number of busses reached.\n");
        return;
    }
    struct Bus newBus;
    newBus.id = numBusses + 1;
    strcpy(newBus.route, route);
    newBus.fare = fare;
    for (int i = 0; i < MAX_SEATS; i++) {
        newBus.seats[i] = 0;
    }
    busses[numBusses] = newBus;
    numBusses++;
    printf("Bus added successfully.\n");
}

// Function to book a seat
void bookSeat(int busId, int seatNum) {
    if (busId > numBusses || seatNum > MAX_SEATS) {
        printf("Invalid bus ID or seat number.\n");
        return;
    }
    struct Bus* bus = &busses[busId-1];
    if (bus->seats[seatNum-1] == 1) {
        printf("Seat already booked.\n");
        return;
    }
    bus->seats[seatNum-1] = 1;
    printf("Seat booked successfully.\n");
}

// Function to cancel a seat
void cancelSeat(int busId, int seatNum) {
    if (busId > numBusses || seatNum > MAX_SEATS) {
        printf("Invalid bus ID or seat number.\n");
        return;
    }
    struct Bus* bus = &busses[busId-1];
    if (bus->seats[seatNum-1] == 0) {
        printf("Seat already empty.\n");
        return;
    }
    bus->seats[seatNum-1] = 0;
    printf("Seat cancelled successfully.\n");
}

// Function to delete or update a particular bus
void deleteOrUpdateBus(int busId) {
    if (busId > numBusses) {
        printf("Invalid bus ID.\n");
        return;
    }
    printf("Do you want to delete (D) or update (U) bus %d?\n", busId);
    char choice;
    scanf(" %c", &choice);
    if (choice == 'D') {
        for (int i = busId-1; i < numBusses-1; i++) {
            busses[i] = busses[i+1];
        }
        numBusses--;
        printf("Bus deleted successfully.\n");
    }
}
}
