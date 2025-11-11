#include <stdio.h>

int main(void) {
  const double GALLON_TO_LITRE = 3.78541;
  const double MILE_TO_KM = 1.60934;

  double travel_mileage, petrol_consumption, miles_per_gallon,litres_per_hundred_km;

  printf("Enter the travel mileage in miles: ");
  if(scanf("%lf", &travel_mileage)!= 1){
    printf("Invalid input\n");
    return 1;
  }

  printf("Enter the petrol consumption in gallons: ");
  if(scanf("%lf", &petrol_consumption)!= 1){
    printf("Invalid input\n");
    return 1;
  }

  miles_per_gallon = travel_mileage / petrol_consumption;
  litres_per_hundred_km = (petrol_consumption * GALLON_TO_LITRE) / (travel_mileage * MILE_TO_KM) * 100;

  printf("Miles per gallon: %.1lf\n", miles_per_gallon); // 2 decimal places
  printf("Litres per hundred km: %.1lf\n", litres_per_hundred_km); // 2 decimal places

  return 0;
}