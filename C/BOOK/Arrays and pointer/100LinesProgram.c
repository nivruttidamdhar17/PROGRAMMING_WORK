/* 
Problem Statement: Airline Reservation System with Dynamic Memory Allocation

Objective: Develop a C program to create and manage an airline reservation system that effectively utilizes structures and dynamic memory allocation.

Data Structures:

Flight: Structure representing a flight with information like origin, destination, departure/arrival time, available seats in different classes (economy, business, first), and ticket price.
Passenger: Structure representing a passenger with details like name, contact information, booking ID, ticket class, and any special requests.
Reservation: Structure representing a reservation, linking a passenger to a specific flight and storing their seat assignment.
System Functionality:

Flight Management:
Add new flights with details like origin, destination, schedule, and seat capacity.
Cancel or modify existing flights.
Display available flights based on search criteria (origin, destination, date).
Passenger Management:
Create passenger profiles with name, contact information, and preferences.
Search for existing passengers by name or booking ID.
Reservation Management:
Allow passengers to book seats on available flights based on their preferences.
Assign seat numbers based on availability and class.
Cancel or modify existing reservations.
Generate reports on bookings, revenue, and passenger trends.
Dynamic Memory Allocation:

Use dynamic memory allocation techniques (malloc, realloc, free) to manage data structures like flights, passengers, and reservations efficiently.
Resize data structures as needed to accommodate new flights, passengers, and reservations.
Handle memory allocation and deallocation properly to avoid memory leaks and crashes
*/




#include<stdio.h>

//Flight management
struct flight
{
    char origin[10];
    char destination[10];
    char arr_time[10];
    char dep_time[10];
    int ava_seats;
    int ticket_price;
}Flight1,Flight2,Flight3,Flight4,Flight4;

struct passanger
{
    char name[20];
    char contact[10];
    int booking_id;
    char ticket_class[10];
};

typedef enum {false, true} bool;
struct reservation
{
    bool resev_status;
};

int main()
{
    struct flight Flight5;
    Flight1.origin="pune";
    Flight1.destination="mumbai";
    Flight1.arr_time="11:00";
    Flight1.dep_time="12:00";
    Flight1.ava_seats=200;
    Flight1.ticket_price=10000;



    printf("%d",flight1->ticket_price);



    
}


