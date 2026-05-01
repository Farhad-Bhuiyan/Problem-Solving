#include <stdio.h>
struct Incident
{
    int id;
    char location[50];
    char type[20];  // e.g., Accident, Jam
    int level;   // 1 (Low) to 5 (High)
} incidents[100];

struct Violation
{
    int id;
    char vehicleNumber[20];
    char driverName[50];
    char type[20];  // e.g., Speeding, Red Light
    float fineAmount;
} violations[100];

struct Intersection
{
    int id;
    char name[50];
    int trafficDensity;
    int signalTime;
} intersections[10];


int incidentCount = 0, violationCount = 0, intersectionCount = 0;

void reportIncident();
void viewIncidents();
void searchIncident();
void editIncident();

void recordViolation();
void viewViolations();
void searchViolation();
void editViolation();

void manageTrafficSignals();
void addIntersection();
void searchIntersection();
void editIntersection();

void reportIncident()
{
    if (incidentCount >= 100)
    {
        printf("Incident database is full!\n");
        return;
    }
    printf("Enter incident details (ID, Location, Type, level): ");
    scanf("%d %s %s %d", &incidents[incidentCount].id, incidents[incidentCount].location,
          incidents[incidentCount].type, &incidents[incidentCount].level);
    incidentCount++;
    printf("Incident reported successfully.\n");
}

void viewIncidents()
{
    printf("ID\tLocation\tType\t\tlevel\n");
    for (int i = 0; i < incidentCount; i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\n", incidents[i].id, incidents[i].location,incidents[i].type, incidents[i].level);
    }
}

void searchIncident()
{
    int id, found = 0;
    printf("Enter Incident ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < incidentCount; i++)
    {
        if (incidents[i].id == id)
        {
            printf("Incident Found: \n");
            printf("ID\tLocation\tType\t\tlevel\n");
            printf("%d\t%s\t\t%s\t\t%d\n", incidents[i].id,
                    incidents[i].location,incidents[i].type, incidents[i].level);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Incident with ID %d not found.\n", id);
    }
}

void editIncident()
{
    int id, found = 0;
    printf("Enter Incident ID to edit: ");
    scanf("%d", &id);

    for (int i = 0; i < incidentCount; i++)
    {
        if (incidents[i].id == id)
        {
            printf("Editing Incident ID %d:\n", id);
            printf("Enter new details (ID, Location, Type, level): ");
            scanf("%d %s %s %d", &incidents[i].id, incidents[i].location,
                  incidents[i].type, &incidents[i].level);
            printf("Incident updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Incident with ID %d not found.\n", id);
    }
}

void recordViolation()
{
    if (violationCount >= 100)
    {
        printf("Violation database is full!\n");
        return;
    }
    printf("Enter violation details (ID, Vehicle Number, Driver Name, Type, Fine Amount): ");
    scanf("%d %s %s %s %f", &violations[violationCount].id, violations[violationCount].vehicleNumber,
          violations[violationCount].driverName, violations[violationCount].type,&violations[violationCount].fineAmount);
    violationCount++;
    printf("Violation recorded successfully.\n");
}

void viewViolations()
{
    printf("ID\tVehicle Number\tDriver Name\tType\t\tFine Amount\n");
    for (int i = 0; i < violationCount; i++)
    {
        printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", violations[i].id, violations[i].vehicleNumber,violations[i].driverName, violations[i].type, violations[i].fineAmount);
    }
}

void searchViolation()
{
    int id, found = 0;
    printf("Enter Violation ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < violationCount; i++)
    {
        if (violations[i].id == id)
        {
            printf("Violation Found: \n");
            printf("ID\tVehicle Number\tDriver Name\tType\t\tFine Amount\n");
            printf("%d\t%s\t\t%s\t\t%s\t\t%.2f\n", violations[i].id,
                   violations[i].vehicleNumber,violations[i].driverName,
                    violations[i].type, violations[i].fineAmount);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Violation with ID %d not found.\n", id);
    }
}

void editViolation()
{
    int id, found = 0;
    printf("Enter Violation ID to edit: ");
    scanf("%d", &id);

    for (int i = 0; i < violationCount; i++)
    {
        if (violations[i].id == id)
        {
            printf("Editing Violation ID %d:\n", id);
            printf("Enter new details (ID, Vehicle Number, Driver Name, Type, Fine Amount): ");
            scanf("%d %s %s %s %f", &violations[i].id, violations[i].vehicleNumber,
                  violations[i].driverName, violations[i].type, &violations[i].fineAmount);
            printf("Violation updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Violation with ID %d not found.\n", id);
    }
}

void manageTrafficSignals()
{
    printf("ID\tIntersection Name\tTraffic Density\tSignal Time\n");
    for (int i = 0; i < intersectionCount; i++)
    {
        printf("%d\t%s\t\t\t%d\t\t%d\n", intersections[i].id, intersections[i].name,
               intersections[i].trafficDensity, intersections[i].signalTime);
    }
}

void addIntersection()
{
    if (intersectionCount >= 10)
    {
        printf("Intersection database is full!\n");
        return;
    }
    printf("Enter intersection details (ID, Name, Traffic Density, Signal Time): ");
    scanf("%d %s %d %d", &intersections[intersectionCount].id,
          intersections[intersectionCount].name,
          &intersections[intersectionCount].trafficDensity,
          &intersections[intersectionCount].signalTime);
    intersectionCount++;
    printf("Intersection added successfully.\n");
}

void searchIntersection()
{
    int id, found = 0;
    printf("Enter Intersection ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < intersectionCount; i++)
    {
        if (intersections[i].id == id)
        {
            printf("Intersection Found: \n");
            printf("ID\tName\t\tTraffic Density\tSignal Time\n");
            printf("%d\t%s\t\t%d\t\t%d\n", intersections[i].id, intersections[i].name,
                   intersections[i].trafficDensity, intersections[i].signalTime);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Intersection with ID %d not found.\n", id);
    }
}

void editIntersection()
{
    int id, found = 0;
    printf("Enter Intersection ID to edit: ");
    scanf("%d", &id);

    for (int i = 0; i < intersectionCount; i++)
    {
        if (intersections[i].id == id)
        {
            printf("Editing Intersection ID %d:\n", id);
            printf("Enter new details (ID, Name, Traffic Density, Signal Time): ");
            scanf("%d %s %d %d", &intersections[i].id, intersections[i].name,
                  &intersections[i].trafficDensity, &intersections[i].signalTime);
            printf("Intersection updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Intersection with ID %d not found.\n", id);
    }
}

int main()
{
    int option;
    do
    {
        printf("\n--- Smart City Traffic Management System ---\n");
        printf("1. Report Incident\n");
        printf("2. View Incidents\n");
        printf("3. Search Incident\n");
        printf("4. Edit Incident\n");
        printf("5. Record Traffic Violation\n");
        printf("6. View Violations\n");
        printf("7. Search Violation\n");
        printf("8. Edit Violation\n");
        printf("9. Manage Traffic Signals\n");
        printf("10. Add Intersection\n");
        printf("11. Search Intersection\n");
        printf("12. Edit Intersection\n");
        printf("13. Exit\n");
        printf("Enter your option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            reportIncident();
            break;
        case 2:
            viewIncidents();
            break;
        case 3:
            searchIncident();
            break;
        case 4:
            editIncident();
            break;
        case 5:
            recordViolation();
            break;
        case 6:
            viewViolations();
            break;
        case 7:
            searchViolation();
            break;
        case 8:
            editViolation();
            break;
        case 9:
            manageTrafficSignals();
            break;
        case 10:
            addIntersection();
            break;
        case 11:
            searchIntersection();
            break;
        case 12:
            editIntersection();
            break;
        case 13:
            printf("Exiting... Thank you!\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
        }
    }
    while (option != 13);

    return 0;
}
