#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_INTERSECTIONS 50
#define MAX_INCIDENTS 100
#define MAX_VEHICLES 200
#define MAX_NAME_LENGTH 50

// Structure Definitions
struct Intersection {
    int id;
    char name[MAX_NAME_LENGTH];
    int traffic_density; // Number of vehicles at the intersection
    int signal_time;     // Signal duration in seconds
};

struct Incident {
    int id;
    char type[MAX_NAME_LENGTH];
    char location[MAX_NAME_LENGTH];
    char severity[MAX_NAME_LENGTH];
    char description[200];
};

struct Violation {
    char vehicle_number[MAX_NAME_LENGTH];
    char driver_name[MAX_NAME_LENGTH];
    char violation_type[MAX_NAME_LENGTH];
    int fine_amount;
};

// Global Variables
struct Intersection intersections[MAX_INTERSECTIONS];
struct Incident incidents[MAX_INCIDENTS];
struct Violation violations[MAX_VEHICLES];
int intersection_count = 0;
int incident_count = 0;
int violation_count = 0;

// Function Prototypes
void addIntersection();
void viewIntersections();
void logIncident();
void viewIncidents();
void logViolation();
void viewViolations();
void adjustSignalTiming();
void displayTrafficHeatmap();

// Main Menu
int main() {
    int choice;
    do {
        printf("\nSmart City Traffic Management System\n");
        printf("1. Add Intersection\n");
        printf("2. View Intersections\n");
        printf("3. Log Incident\n");
        printf("4. View Incidents\n");
        printf("5. Log Traffic Violation\n");
        printf("6. View Traffic Violations\n");
        printf("7. Adjust Signal Timing\n");
        printf("8. Display Traffic Heatmap\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addIntersection();
                break;
            case 2:
                viewIntersections();
                break;
            case 3:
                logIncident();
                break;
            case 4:
                viewIncidents();
                break;
            case 5:
                logViolation();
                break;
            case 6:
                viewViolations();
                break;
            case 7:
                adjustSignalTiming();
                break;
            case 8:
                displayTrafficHeatmap();
                break;
            case 9:
                printf("Exiting the system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 9);

    return 0;
}

// Function Definitions
void addIntersection() {
    if (intersection_count >= MAX_INTERSECTIONS) {
        printf("Maximum intersections reached. Cannot add more.\n");
        return;
    }

    struct Intersection new_intersection;
    new_intersection.id = intersection_count + 1;
    printf("Enter intersection name: ");
    scanf("%s", new_intersection.name);
    new_intersection.traffic_density = 0;
    new_intersection.signal_time = 30; // Default signal time

    intersections[intersection_count++] = new_intersection;
    printf("Intersection added successfully!\n");
}

void viewIntersections() {
    printf("\nIntersections:\n");
    printf("ID\tName\tTraffic Density\tSignal Time\n");
    for (int i = 0; i < intersection_count; i++) {
        printf("%d\t%s\t%d\t%d\n", intersections[i].id, intersections[i].name, intersections[i].traffic_density, intersections[i].signal_time);
    }
}

void logIncident() {
    if (incident_count >= MAX_INCIDENTS) {
        printf("Maximum incidents logged. Cannot add more.\n");
        return;
    }

    struct Incident new_incident;
    new_incident.id = incident_count + 1;
    printf("Enter incident type (e.g., Accident, Jam): ");
    scanf("%s", new_incident.type);
    printf("Enter location: ");
    scanf("%s", new_incident.location);
    printf("Enter severity (High, Medium, Low): ");
    scanf("%s", new_incident.severity);
    printf("Enter description: ");
    getchar();
    fgets(new_incident.description, sizeof(new_incident.description), stdin);

    incidents[incident_count++] = new_incident;
    printf("Incident logged successfully!\n");
}

void viewIncidents() {
    printf("\nIncidents:\n");
    printf("ID\tType\tLocation\tSeverity\tDescription\n");
    for (int i = 0; i < incident_count; i++) {
        printf("%d\t%s\t%s\t%s\t%s\n", incidents[i].id, incidents[i].type, incidents[i].location, incidents[i].severity, incidents[i].description);
    }
}

void logViolation() {
    if (violation_count >= MAX_VEHICLES) {
        printf("Maximum violations logged. Cannot add more.\n");
        return;
    }

    struct Violation new_violation;
    printf("Enter vehicle number: ");
    scanf("%s", new_violation.vehicle_number);
    printf("Enter driver name: ");
    scanf("%s", new_violation.driver_name);
    printf("Enter violation type (e.g., Speeding, Red-light jump): ");
    scanf("%s", new_violation.violation_type);
    printf("Enter fine amount: ");
    scanf("%d", &new_violation.fine_amount);

    violations[violation_count++] = new_violation;
    printf("Violation logged successfully!\n");
}

void viewViolations() {
    printf("\nViolations:\n");
    printf("Vehicle Number\tDriver Name\tViolation Type\tFine Amount\n");
    for (int i = 0; i < violation_count; i++) {
        printf("%s\t%s\t%s\t%d\n", violations[i].vehicle_number, violations[i].driver_name, violations[i].violation_type, violations[i].fine_amount);
    }
}

void adjustSignalTiming() {
    printf("\nAdjusting Signal Timings:\n");
    for (int i = 0; i < intersection_count; i++) {
        intersections[i].signal_time = intersections[i].traffic_density / 10 + 30;
        if (intersections[i].signal_time < 30)
            intersections[i].signal_time = 30;
        printf("Intersection %s new signal time: %d seconds\n", intersections[i].name, intersections[i].signal_time);
    }
}

void displayTrafficHeatmap() {
    printf("\nTraffic Heatmap:\n");
    for (int i = 0; i < intersection_count; i++) {
        printf("%s: ", intersections[i].name);
        for (int j = 0; j < intersections[i].traffic_density / 10; j++) {
            printf("#");
        }
        printf(" (%d vehicles)\n", intersections[i].traffic_density);
    }
}

